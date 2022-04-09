//#include"map.h"
//#include<vector>

//using namespace std;

///*
//yzy
//*/

//int main() {

//	vector<Node>nodes;//Node

//	Node CROSSING_475_205 = Node("CROSSING", 475, 205);
//	Node CROSSING_475_340 = Node("CROSSING", 475, 340);
//	Node CROSSING_475_400 = Node("CROSSING", 475, 400);
//	Node CROSSING_650_340 = Node("CROSSING", 650, 340);
//	Node CROSSING_650_400 = Node("CROSSING", 650, 400);

//	nodes.push_back(CROSSING_475_205);
//	nodes.push_back(CROSSING_475_340);
//	nodes.push_back(CROSSING_475_400);
//	nodes.push_back(CROSSING_650_340);
//	nodes.push_back(CROSSING_650_400);

	
//	Node NteachingBuildingNorth = Node("教学楼N", 560, 205);
//	Node NteachingBuildingWest = Node("教学楼N", 475, 240);
//	Node NteachingBuildingEast = Node("教学楼N", 650, 245);

//    nodes.push_back(NteachingBuildingNorth);
//    nodes.push_back(NteachingBuildingWest);
//    nodes.push_back(NteachingBuildingEast);

//	Node auditorium = Node("报告厅", 475, 275);

//	nodes.push_back(auditorium);

//	Node SteachingBuildingWest = Node("教学楼S", 475, 310);
//	Node SteachingBuildingEast = Node("教学楼S", 650, 305);

//	nodes.push_back(SteachingBuildingWest);
//	nodes.push_back(SteachingBuildingEast);

//	Node S1teachingBuildingNorth = Node("教学楼S1", 720, 205);
//	Node S1teachingBuildingWest = Node("教学楼S1", 650, 240);

//	nodes.push_back(S1teachingBuildingNorth);
//	nodes.push_back(S1teachingBuildingWest);

//	Node S2LaboratoryBuilding = Node("S2实验楼", 650, 330);

//	nodes.push_back(S2LaboratoryBuilding);

//	Node S3LaboratoryBuilding = Node("S3实验楼", 650, 370);

//	nodes.push_back(S3LaboratoryBuilding);

//	Node collegeBuilding = Node("学院楼", 650, 450);

//	nodes.push_back(collegeBuilding);
	
//	//����ΪEdge��ʼ����map��ֵ
//	Edge NteachingBuildingNorth_auditorium = Edge(155);
//	Edge NteachingBuildingNorth_SteachingBuildingWest = Edge(190);
//	Edge NteachingBuildingNorth_SteachingBuildingEast = Edge(190);
//	Edge NteachingBuildingNorth_S1teachingBuildingNorth = Edge(250);
//	Edge NteachingBuildingNorth_S1teachingBuildingWest = Edge(125);
//	Edge NteachingBuildingNorth_S2LaboratoryBuilding = Edge(215);
//	Edge NteachingBuildingNorth_S3LaboratoryBuilding = Edge(255);
//	Edge NteachingBuildingNorth_collegeBuilding = Edge(335);

//	NteachingBuildingNorth.setAdjacent(auditorium, NteachingBuildingNorth_auditorium);
//	NteachingBuildingNorth.setAdjacent(SteachingBuildingWest, NteachingBuildingNorth_SteachingBuildingWest);
//	NteachingBuildingNorth.setAdjacent(SteachingBuildingEast, NteachingBuildingNorth_SteachingBuildingEast);
//	NteachingBuildingNorth.setAdjacent(S1teachingBuildingNorth, NteachingBuildingNorth_S1teachingBuildingNorth);
//	NteachingBuildingNorth.setAdjacent(S1teachingBuildingWest, NteachingBuildingNorth_S1teachingBuildingWest);
//	NteachingBuildingNorth.setAdjacent(S2LaboratoryBuilding, NteachingBuildingNorth_S2LaboratoryBuilding);
//	NteachingBuildingNorth.setAdjacent(S3LaboratoryBuilding, NteachingBuildingNorth_S3LaboratoryBuilding);
//	NteachingBuildingNorth.setAdjacent(collegeBuilding, NteachingBuildingNorth_collegeBuilding);

//	Edge NteachingBuildingWest_auditorium = Edge(35);
//	Edge NteachingBuildingWest_SteachingBuildingWest = Edge(70);
//	Edge NteachingBuildingWest_SteachingBuildingEast = Edge(145);
//	Edge NteachingBuildingWest_S1teachingBuildingNorth = Edge(280);
//	Edge NteachingBuildingWest_S1teachingBuildingWest = Edge(175);
//	Edge NteachingBuildingWest_S2LaboratoryBuilding = Edge(265);
//	Edge NteachingBuildingWest_S3LaboratoryBuilding = Edge(305);
//	Edge NteachingBuildingWest_collegeBuilding = Edge(385);
	
//	NteachingBuildingWest.setAdjacent(auditorium, NteachingBuildingWest_auditorium);
//	NteachingBuildingWest.setAdjacent(SteachingBuildingWest, NteachingBuildingWest_SteachingBuildingWest);
//	NteachingBuildingWest.setAdjacent(SteachingBuildingEast, NteachingBuildingWest_SteachingBuildingEast);
//	NteachingBuildingWest.setAdjacent(S1teachingBuildingNorth, NteachingBuildingWest_S1teachingBuildingNorth);
//	NteachingBuildingWest.setAdjacent(S1teachingBuildingWest, NteachingBuildingWest_S1teachingBuildingWest);
//	NteachingBuildingWest.setAdjacent(S2LaboratoryBuilding, NteachingBuildingWest_S2LaboratoryBuilding);
//	NteachingBuildingWest.setAdjacent(S3LaboratoryBuilding, NteachingBuildingWest_S3LaboratoryBuilding);
//	NteachingBuildingWest.setAdjacent(collegeBuilding, NteachingBuildingWest_collegeBuilding);

//	Edge NteachingBuildingEast_auditorium = Edge(205);
//	Edge NteachingBuildingEast_SteachingBuildingWest = Edge(240);
//	Edge NteachingBuildingEast_SteachingBuildingEast = Edge(55);
//	Edge NteachingBuildingEast_S1teachingBuildingNorth = Edge(105);
//	Edge NteachingBuildingEast_S1teachingBuildingWest = Edge(5);
//	Edge NteachingBuildingEast_S2LaboratoryBuilding = Edge(85);
//	Edge NteachingBuildingEast_S3LaboratoryBuilding = Edge(125);
//	Edge NteachingBuildingEast_collegeBuilding = Edge(205);

//	NteachingBuildingEast.setAdjacent(auditorium, NteachingBuildingEast_auditorium);
//	NteachingBuildingEast.setAdjacent(SteachingBuildingWest, NteachingBuildingEast_SteachingBuildingWest);
//	NteachingBuildingEast.setAdjacent(SteachingBuildingEast, NteachingBuildingEast_SteachingBuildingEast);
//	NteachingBuildingEast.setAdjacent(S1teachingBuildingNorth, NteachingBuildingEast_S1teachingBuildingNorth);
//	NteachingBuildingEast.setAdjacent(S1teachingBuildingWest, NteachingBuildingEast_S1teachingBuildingWest);
//	NteachingBuildingEast.setAdjacent(S2LaboratoryBuilding, NteachingBuildingEast_S2LaboratoryBuilding);
//	NteachingBuildingEast.setAdjacent(S3LaboratoryBuilding, NteachingBuildingEast_S3LaboratoryBuilding);
//	NteachingBuildingEast.setAdjacent(collegeBuilding, NteachingBuildingEast_collegeBuilding);

//	Edge auditorium_NteachingBuildingNorth = Edge(155);
//	Edge auditorium_NteachingBuildingWest = Edge(35);
//	Edge auditorium_NteachingBuildingEast = Edge(205);
//	Edge auditorium_SteachingBuildingWest = Edge(35);
//	Edge auditorium_SteachingBuildingEast = Edge(205);
//	Edge auditorium_S1teachingBuildingWest = Edge(205);
//	Edge auditorium_S1teachingBuildingNorth = Edge(320);
//	Edge auditorium_S2LaboratoryBuilding = Edge(230);
//	Edge auditorium_S3LaboratoryBuilding = Edge(270);
//	Edge auditorium_collegeBuilding = Edge(350);

//	auditorium.setAdjacent(NteachingBuildingNorth, auditorium_NteachingBuildingNorth);
//	auditorium.setAdjacent(NteachingBuildingWest, auditorium_NteachingBuildingWest);
//	auditorium.setAdjacent(NteachingBuildingEast, auditorium_NteachingBuildingEast);
//	auditorium.setAdjacent(SteachingBuildingWest, auditorium_SteachingBuildingEast);
//	auditorium.setAdjacent(SteachingBuildingEast, auditorium_S1teachingBuildingWest);
//	auditorium.setAdjacent(S1teachingBuildingWest, auditorium_S1teachingBuildingWest);
//	auditorium.setAdjacent(S1teachingBuildingNorth, auditorium_S1teachingBuildingNorth);
//	auditorium.setAdjacent(S2LaboratoryBuilding, auditorium_S2LaboratoryBuilding);
//	auditorium.setAdjacent(S3LaboratoryBuilding, auditorium_S3LaboratoryBuilding);
//	auditorium.setAdjacent(collegeBuilding, auditorium_collegeBuilding);

//	Edge SteachingBuildingWest_NteachingBuildingNorth = Edge(190);
//	Edge SteachingBuildingWest_NteachingBuildingWest = Edge(70);
//	Edge SteachingBuildingWest_NteachingBuildingEast = Edge(240);
//	Edge SteachingBuildingWest_auditorium = Edge(35);
//	Edge SteachingBuildingWest_S1teachingBuildingWest = Edge(245);
//	Edge SteachingBuildingWest_S1teachingBuildingNorth = Edge(350);
//	Edge SteachingBuildingWest_S2LaboratoryBuilding = Edge(195);
//	Edge SteachingBuildingWest_S3LaboratoryBuilding = Edge(235);
//	Edge SteachingBuildingWest_collegeBuilding = Edge(315);

//	SteachingBuildingWest.setAdjacent(NteachingBuildingNorth, SteachingBuildingWest_NteachingBuildingNorth);
//	SteachingBuildingWest.setAdjacent(NteachingBuildingWest, SteachingBuildingWest_NteachingBuildingWest);
//	SteachingBuildingWest.setAdjacent(NteachingBuildingEast, SteachingBuildingWest_NteachingBuildingEast);
//	SteachingBuildingWest.setAdjacent(auditorium, SteachingBuildingWest_auditorium);
//	SteachingBuildingWest.setAdjacent(S1teachingBuildingWest, SteachingBuildingWest_S1teachingBuildingWest);
//	SteachingBuildingWest.setAdjacent(S1teachingBuildingNorth, SteachingBuildingWest_S1teachingBuildingNorth);
//	SteachingBuildingWest.setAdjacent(S2LaboratoryBuilding, SteachingBuildingWest_S2LaboratoryBuilding);
//	SteachingBuildingWest.setAdjacent(S3LaboratoryBuilding, SteachingBuildingWest_S3LaboratoryBuilding);
//	SteachingBuildingWest.setAdjacent(collegeBuilding, SteachingBuildingWest_collegeBuilding);

//	Edge SteachingBuildingEast_NteachingBuildingNorth = Edge(190);
//	Edge SteachingBuildingEast_NteachingBuildingWest = Edge(145);
//	Edge SteachingBuildingEast_NteachingBuildingEast = Edge(55);
//	Edge SteachingBuildingEast_auditorium = Edge(205);
//	Edge SteachingBuildingEast_S1teachingBuildingWest = Edge(65);
//	Edge SteachingBuildingEast_S1teachingBuildingNorth = Edge(170);
//	Edge SteachingBuildingEast_S2LaboratoryBuilding = Edge(25);
//	Edge SteachingBuildingEast_S3LaboratoryBuilding = Edge(65);
//	Edge SteachingBuildingEast_collegeBuilding = Edge(145);

//	SteachingBuildingEast.setAdjacent(NteachingBuildingNorth, SteachingBuildingEast_NteachingBuildingNorth);
//	SteachingBuildingEast.setAdjacent(NteachingBuildingWest, SteachingBuildingEast_NteachingBuildingWest);
//	SteachingBuildingEast.setAdjacent(NteachingBuildingEast, SteachingBuildingEast_NteachingBuildingEast);
//	SteachingBuildingEast.setAdjacent(auditorium, SteachingBuildingEast_auditorium);
//	SteachingBuildingEast.setAdjacent(S1teachingBuildingWest, SteachingBuildingEast_S1teachingBuildingWest);
//	SteachingBuildingEast.setAdjacent(S1teachingBuildingNorth, SteachingBuildingEast_S1teachingBuildingNorth);
//	SteachingBuildingEast.setAdjacent(S2LaboratoryBuilding, SteachingBuildingEast_S2LaboratoryBuilding);
//	SteachingBuildingEast.setAdjacent(S3LaboratoryBuilding, SteachingBuildingEast_S3LaboratoryBuilding);
//	SteachingBuildingEast.setAdjacent(collegeBuilding, SteachingBuildingEast_collegeBuilding);

//	Edge S1teachingBuildingNorth_NteachingBuildingNorth = Edge(250);
//	Edge S1teachingBuildingNorth_NteachingBuildingWest = Edge(280);
//	Edge S1teachingBuildingNorth_NteachingBuildingEast = Edge(105);
//	Edge S1teachingBuildingNorth_auditorium = Edge(320);
//	Edge S1teachingBuildingNorth_SteachingBuildingWest = Edge(350);
//	Edge S1teachingBuildingNorth_SteachingBuildingEast = Edge(170);
//	Edge S1teachingBuildingNorth_S2LaboratoryBuilding = Edge(195);
//	Edge S1teachingBuildingNorth_S3LaboratoryBuilding = Edge(235);
//	Edge S1teachingBuildingNorth_collegeBuilding = Edge(315);

//	S1teachingBuildingNorth.setAdjacent(NteachingBuildingNorth, S1teachingBuildingNorth_NteachingBuildingNorth);
//	S1teachingBuildingNorth.setAdjacent(NteachingBuildingWest, S1teachingBuildingNorth_NteachingBuildingWest);
//	S1teachingBuildingNorth.setAdjacent(NteachingBuildingEast, S1teachingBuildingNorth_NteachingBuildingEast);
//	S1teachingBuildingNorth.setAdjacent(auditorium, S1teachingBuildingNorth_auditorium);
//	S1teachingBuildingNorth.setAdjacent(SteachingBuildingWest, S1teachingBuildingNorth_SteachingBuildingWest);
//	S1teachingBuildingNorth.setAdjacent(SteachingBuildingEast, S1teachingBuildingNorth_SteachingBuildingEast);
//	S1teachingBuildingNorth.setAdjacent(S2LaboratoryBuilding, S1teachingBuildingNorth_S2LaboratoryBuilding);
//	S1teachingBuildingNorth.setAdjacent(S3LaboratoryBuilding, S1teachingBuildingNorth_S3LaboratoryBuilding);
//	S1teachingBuildingNorth.setAdjacent(collegeBuilding, S1teachingBuildingNorth_collegeBuilding);

//	Edge S1teachingBuildingWest_NteachingBuildingNorth = Edge(125);
//	Edge S1teachingBuildingWest_NteachingBuildingWest = Edge(175);
//	Edge S1teachingBuildingWest_NteachingBuildingEast = Edge(5);
//	Edge S1teachingBuildingWest_auditorium = Edge(205);
//	Edge S1teachingBuildingWest_SteachingBuildingWest = Edge(245);
//	Edge S1teachingBuildingWest_SteachingBuildingEast = Edge(65);
//	Edge S1teachingBuildingWest_S2LaboratoryBuilding = Edge(90);
//	Edge S1teachingBuildingWest_S3LaboratoryBuilding = Edge(130);
//	Edge S1teachingBuildingWest_collegeBuilding = Edge(210);

//	S1teachingBuildingWest.setAdjacent( NteachingBuildingNorth, S1teachingBuildingWest_NteachingBuildingNorth);
//    S1teachingBuildingWest.setAdjacent( NteachingBuildingWest, S1teachingBuildingWest_NteachingBuildingWest);
//    S1teachingBuildingWest.setAdjacent( NteachingBuildingEast, S1teachingBuildingWest_NteachingBuildingEast);
//    S1teachingBuildingWest.setAdjacent( auditorium, S1teachingBuildingWest_auditorium);
//    S1teachingBuildingWest.setAdjacent( SteachingBuildingWest, S1teachingBuildingWest_SteachingBuildingWest);
//    S1teachingBuildingWest.setAdjacent( SteachingBuildingEast, S1teachingBuildingWest_SteachingBuildingEast);
//    S1teachingBuildingWest.setAdjacent( S2LaboratoryBuilding, S1teachingBuildingWest_S2LaboratoryBuilding);
//    S1teachingBuildingWest.setAdjacent( S3LaboratoryBuilding, S1teachingBuildingWest_S3LaboratoryBuilding);
//    S1teachingBuildingWest.setAdjacent( collegeBuilding, S1teachingBuildingWest_collegeBuilding);

//	Edge S2LaboratoryBuilding_NteachingBuildingNorth = Edge(215);
//	Edge S2LaboratoryBuilding_NteachingBuildingWest = Edge(265);
//	Edge S2LaboratoryBuilding_NteachingBuildingEast = Edge(85);
//	Edge S2LaboratoryBuilding_auditorium = Edge(230);
//	Edge S2LaboratoryBuilding_SteachingBuildingWest = Edge(195);
//	Edge S2LaboratoryBuilding_SteachingBuildingEast = Edge(25);
//	Edge S2LaboratoryBuilding_S1teachingBuildingNorth = Edge(195);
//	Edge S2LaboratoryBuilding_S1teachingBuildingWest = Edge(90);
//	Edge S2LaboratoryBuilding_S3LaboratoryBuilding = Edge(40);
//	Edge S2LaboratoryBuilding_collegeBuilding = Edge(120);

//	S2LaboratoryBuilding.setAdjacent(NteachingBuildingNorth, S2LaboratoryBuilding_NteachingBuildingNorth);
//	S2LaboratoryBuilding.setAdjacent(NteachingBuildingWest, S2LaboratoryBuilding_NteachingBuildingWest);
//	S2LaboratoryBuilding.setAdjacent(NteachingBuildingEast, S2LaboratoryBuilding_NteachingBuildingEast);
//	S2LaboratoryBuilding.setAdjacent(auditorium, S2LaboratoryBuilding_auditorium);
//	S2LaboratoryBuilding.setAdjacent(SteachingBuildingWest, S2LaboratoryBuilding_SteachingBuildingWest);
//	S2LaboratoryBuilding.setAdjacent(SteachingBuildingEast, S2LaboratoryBuilding_SteachingBuildingEast);
//	S2LaboratoryBuilding.setAdjacent(S1teachingBuildingNorth, S2LaboratoryBuilding_S1teachingBuildingNorth);
//	S2LaboratoryBuilding.setAdjacent(S1teachingBuildingWest, S2LaboratoryBuilding_S1teachingBuildingWest);
//	S2LaboratoryBuilding.setAdjacent(S3LaboratoryBuilding, S2LaboratoryBuilding_S3LaboratoryBuilding);
//	S2LaboratoryBuilding.setAdjacent(collegeBuilding, S2LaboratoryBuilding_collegeBuilding);

//	Edge S3LaboratoryBuilding_NteachingBuildingNorth = Edge(255);
//	Edge S3LaboratoryBuilding_NteachingBuildingWest = Edge(305);
//	Edge S3LaboratoryBuilding_NteachingBuildingEast = Edge(125);
//	Edge S3LaboratoryBuilding_auditorium = Edge(270);
//	Edge S3LaboratoryBuilding_SteachingBuildingWest = Edge(235);
//	Edge S3LaboratoryBuilding_SteachingBuildingEast = Edge(65);
//	Edge S3LaboratoryBuilding_S1teachingBuildingNorth = Edge(235);
//	Edge S3LaboratoryBuilding_S1teachingBuildingWest = Edge(130);
//	Edge S3LaboratoryBuilding_S2LaboratoryBuilding = Edge(40);
//	Edge S3LaboratoryBuilding_collegeBuilding = Edge(80);

//	S3LaboratoryBuilding.setAdjacent(NteachingBuildingNorth, S3LaboratoryBuilding_NteachingBuildingNorth);
//	S3LaboratoryBuilding.setAdjacent(NteachingBuildingWest, S3LaboratoryBuilding_NteachingBuildingWest);
//	S3LaboratoryBuilding.setAdjacent(NteachingBuildingEast, S3LaboratoryBuilding_NteachingBuildingEast);
//	S3LaboratoryBuilding.setAdjacent(auditorium, S3LaboratoryBuilding_auditorium);
//	S3LaboratoryBuilding.setAdjacent(SteachingBuildingWest, S3LaboratoryBuilding_SteachingBuildingWest);
//	S3LaboratoryBuilding.setAdjacent(SteachingBuildingEast, S3LaboratoryBuilding_SteachingBuildingEast);
//	S3LaboratoryBuilding.setAdjacent(S1teachingBuildingNorth, S3LaboratoryBuilding_S1teachingBuildingNorth);
//	S3LaboratoryBuilding.setAdjacent(S1teachingBuildingWest, S3LaboratoryBuilding_S1teachingBuildingWest);
//	S3LaboratoryBuilding.setAdjacent(S2LaboratoryBuilding, S3LaboratoryBuilding_S2LaboratoryBuilding);
//	S3LaboratoryBuilding.setAdjacent(collegeBuilding, S3LaboratoryBuilding_collegeBuilding);

//	Edge collegeBuilding_NteachingBuildingNorth = Edge(335);
//	Edge collegeBuilding_NteachingBuildingWest = Edge(385);
//	Edge collegeBuilding_NteachingBuildingEast = Edge(205);
//	Edge collegeBuilding_auditorium = Edge(350);
//	Edge collegeBuilding_SteachingBuildingWest = Edge(315);
//	Edge collegeBuilding_SteachingBuildingEast = Edge(145);
//	Edge collegeBuilding_S1teachingBuildingNorth = Edge(315);
//	Edge collegeBuilding_S1teachingBuildingWest = Edge(210);
//	Edge collegeBuilding_S2LaboratoryBuilding = Edge(120);
//	Edge collegeBuilding_S3LaboratoryBuilding = Edge(80);

//	collegeBuilding.setAdjacent(NteachingBuildingNorth, collegeBuilding_NteachingBuildingNorth);
//	collegeBuilding.setAdjacent(NteachingBuildingWest, collegeBuilding_NteachingBuildingWest);
//	collegeBuilding.setAdjacent(NteachingBuildingEast, collegeBuilding_NteachingBuildingEast);
//	collegeBuilding.setAdjacent(auditorium, collegeBuilding_auditorium);
//	collegeBuilding.setAdjacent(SteachingBuildingWest, collegeBuilding_SteachingBuildingWest);
//	collegeBuilding.setAdjacent(SteachingBuildingEast, collegeBuilding_SteachingBuildingEast);
//	collegeBuilding.setAdjacent(S1teachingBuildingNorth, collegeBuilding_S1teachingBuildingNorth);
//	collegeBuilding.setAdjacent(S1teachingBuildingWest, collegeBuilding_S1teachingBuildingWest);
//	collegeBuilding.setAdjacent(S2LaboratoryBuilding, collegeBuilding_S2LaboratoryBuilding);
//	collegeBuilding.setAdjacent(S3LaboratoryBuilding, collegeBuilding_S3LaboratoryBuilding);

//	return 0;

//}








