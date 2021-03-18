just test the CI/CD freature, the build tools is make gerrit and jenkins, so you can buid this cod in jenkins like flow script:

##!/bin/bash
cd $WORKSPACE git fetch "ssh://jenkins@192.168.x.x:29418/$GERRIT_PROJECT" $GERRIT_REFSPEC && git cherry-pick FETCH_HEAD
./build.sh
error_code=$? exit $error_code
