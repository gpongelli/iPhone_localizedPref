//
//  preferences_part1ViewController.h
//  preferences_part1
//
//  Created by Gabriele on 26/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface preferences_part1ViewController : UIViewController {
	IBOutlet UILabel* nome;
	IBOutlet UILabel* si_no;
	IBOutlet UILabel* voto;
	IBOutlet UILabel* interessato;
	IBOutlet UIButton* refresh;
}

-(IBAction) refresh;


@end

