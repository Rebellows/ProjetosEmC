#/workspaces/linuxdistro/buildroot-2024.05.2/custom-scripts
#!/bin/sh

HOST=`hostname -I | awk '{print $1}'`
cat $BASE_DIR/../custom-scripts/network-config | sed 's/\[IP-DO-HOST\]/'"$HOST"'/g' > $BASE_DIR/../custom-scripts/S41network-config
cp $BASE_DIR/../custom-scripts/S41network-config $BASE_DIR/target/etc/init.d
chmod +x $BASE_DIR/target/etc/init.d/S41network-config

cp $BASE_DIR/../apps/hello $BASE_DIR/target/usr/bin
chmod +x $BASE_DIR/target/usr/bin/hello

cp $BASE_DIR/../apps/server  $BASE_DIR/target/usr/bin
chmod +x $BASE_DIR/target/usr/bin/server

cp $BASE_DIR/../apps/osInfo  $BASE_DIR/target/usr/bin
chmod +x $BASE_DIR/target/usr/bin/osInfo

cp $BASE_DIR/../custom-scripts/S50begin $BASE_DIR/target/etc/init.d
chmod +x $BASE_DIR/target/etc/init.d/S50begin
