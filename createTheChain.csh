#!/bin/csh

setenv THEDIR /store/user/hbrun/CSA14/testElectrons/DYJets_25ns
set list = `(cmsLs $THEDIR | awk '{ print $5 }')`

foreach i ($list)
    #echo $i  
    echo 'theTree->Add("root://eoscms//eos/cms'$i'");'
end



