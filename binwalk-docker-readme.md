the binwalk-docker.tar image have installed binwalk. You can download to use it.

**After downloading**, use `docker load < /filepath/binwalk-docker.tar` to load docker image.

**After loading**, use `docker run -it -v ~/binwalk-file-share/:/root/file-share/ binwalk-docker /bin/bash` to run the docker image.

**todo**
1. upload to aliyun image repo
2. reduce size of image.
