int change = 1;
	bool save = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < listnum; j++) {
			if (i == 0)
				mh[i][j] = j % 2; 
			else if (j % change == 0){
				if (save == 0)
					save = 1;
				else if (save == 1)
					save = 0;
				mh[i][j] = save;
			}else
				mh[i][j] = save;
		}
		change *= 2;
		save = 1;
	}
