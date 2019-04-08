#include "gloabal.h"

#include <QString>
//variable which counts the number of plans saved
int k = 0;
//generic counters
int counter;
int j = 0;
int count = 0;
//variable which represents the number of items displayed in the widget list
int numItems = 0;
//variable which works as support to "numItems" and prevent the program from crashing
int numItemsConstant = 0;
//variable which determines the route chosen by the user and makes the tracking bar work correctly
int route = 0;
//variable which stores the id of the plan analysed
int id;
//variable which works as support for id variable
int id2;
//arrays which stores ids of selected plans
int IDs[10];
//variable which changes the dafault name of the exported file
int fileNameNumber = 0;
//arrays which store the name of plans, the domain files, the problem files and the plans'content.
//-> Changing the size of these arrays increases the number of plans that the user can save.
QString plans[10];
QString domains[10];
QString problems[10];
QString plansContent[10];
//variable which stores orginal plan
QString Plan;
//variable which stores the XPlan
QString Plan2;
//support array which stores values of selected elements
QString action[100];
//variable which stores action and time to remove
QString toRemove;
//variable which store action/s to add or reschedule
QString toAdd[100];
//variables which set time window
QString startTime;
QString endTime;
//variables which store the options chosen for the reschduling method
QString windowOpt;
QString beforeafterOpt;
//variable which stores the "parameter action"
QString beforeafterAction;
//variable which stores the number of steps
QString steps;
//variable which stores the sequence to reschedule. It does not have size 3 because it prevent the program from crashing
QString toReschedule[100];
/*variables which determines if the plan is valid or not.
It is initialised true because the user can decide to validate the plan even if he did validate it.*/
bool isValid = true;
/*this variable checks if the user added an action to the domain file. If so, the planner will be provided with
 copy of the domain file generated when the user saves the modification.*/
bool newActionImplemnted = false;
//variable which states if the user has chosen the time-window method or the before-after method.
QString windowORAct = " ";
/*variable which states which theme has been chosen by the user. It is initialised with "white" because the default
theme is white.*/
QString themeColor = "white";
//support array which is used to anlyse lines of the plan
QString linesValue[100];
//variable which store the value that the button in User Question will get.
QString compareButtonName;

