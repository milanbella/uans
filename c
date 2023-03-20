#!/bin/bash
ansible-playbook -i  ./hosts.yml --extra-vars="in_hosts=usrv" playbooks/samba/samba.yml
#ansible-playbook -i  ./hosts.yml --extra-vars="in_hosts=usrv hostname_val=usrv" playbooks/hostname/set_hostname.yml
