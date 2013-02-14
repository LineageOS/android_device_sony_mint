#!/sbin/sh

last_entry=$(parted -ms /dev/block/mmcblk0 unit MB print|tail -1)
var=$(echo $last_entry | awk -F":" '{print $1,$2,$3,$4,$5,$6}')   
set -- $var

name=$6
end=${3//[^0-9]/}

lk_needs_install=0

if [ "$name" == "SDCard" ] 
then
    lk_needs_install=1
fi

echo $lk_needs_install

if [ "$lk_needs_install" -eq 1 ]
then
    parted -ms /dev/block/mmcblk0 mkpart Android ext2 $(($end+1)) $(($end+1+30))
    # For some reason naming fails on create, partition name is important so we will set it again
    parted -ms /dev/block/mmcblk0 name $(($1+1)) Android
    dd if=/dev/block/mmcblk0p4 of=/dev/block/mmcblk0p$(($1+1))
    exit 0
fi

if [ "$name" != "Android" ]
then
    exit 1
fi

exit 0
