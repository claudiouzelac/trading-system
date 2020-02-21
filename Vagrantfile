# -*- mode: ruby -*-

VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
    # Ubuntu Xenial
    #   https://app.vagrantup.com/ubuntu/boxes/xenial64
    config.vm.box = "ubuntu/xenial64"
    config.vm.box_check_update = true
    config.ssh.insert_key = true
    config.ssh.forward_agent = true
    config.vm.network :private_network, ip: "10.10.10.10"
    config.vm.synced_folder ".", "/vagrant", disabled: true
    config.vm.synced_folder "./", "/opt/trading"
    config.vm.provider "virtualbox" do |vb|
      vb.name = "trading-system"
      # Disallow Desktop login
      vb.gui = false
      vb.memory = "2048"
      vb.customize ["modifyvm", :id, "--natdnshostresolver1", "on"]
      vb.customize ["setextradata", :id, "VBoxInternal2/SharedFoldersEnableSymlinksCreate/v-root", "1"]
    end
    config.vm.provision :shell, path: "./bin/vagrant.sh"
  end
