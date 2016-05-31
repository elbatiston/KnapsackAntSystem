//Constant universe so it's not random
//Parameters for this universe:
//Value = [0, 100]
//Restrictions = { [0.5, 100.0], [100.0, 2000.0] }
//Pheromone initial = 40.0, max = 100.0
//Pheromone weight = 0.1
//Desirability is (cost)/prod( (weight/max_weight) )
//Desirability weight = 1.5
//pdValue is Pheromone^phe_weight * desirability^des_weight

//If any parameters change, create_universe shall be used
#ifndef __UNIVERSE__
#define __UNIVERSE__
#include "const.h"
#include "item.h"

struct Item universe[NUM_ITEMS] = { 
{.value = 57,.restrictions = {0.611985,110.847370},.desirability = 158849.266018,.pheromone = 40.000000,.pdValue = 91555369.103349},
{.value = 57,.restrictions = {24.641271,135.930434},.desirability = 3217.153096,.pheromone = 40.000000,.pdValue = 263884.323929},
{.value = 57,.restrictions = {19.475567,165.961075},.desirability = 3333.920145,.pheromone = 40.000000,.pdValue = 278380.486239},
{.value = 15,.restrictions = {60.893403,130.971086},.desirability = 355.567670,.pheromone = 40.000000,.pdValue = 9695.928343},
{.value = 87,.restrictions = {6.736058,189.646952},.desirability = 12874.911538,.pheromone = 40.000000,.pdValue = 2112624.829715},
{.value = 19,.restrictions = {98.444139,106.799291},.desirability = 341.642623,.pheromone = 40.000000,.pdValue = 9131.961485},
{.value = 14,.restrictions = {5.625074,201.502361},.desirability = 2335.050628,.pheromone = 40.000000,.pdValue = 163173.808876},
{.value = 15,.restrictions = {58.112640,162.630453},.desirability = 300.051266,.pheromone = 40.000000,.pdValue = 7516.215014},
{.value = 35,.restrictions = {36.314253,183.439078},.desirability = 993.289293,.pheromone = 40.000000,.pdValue = 45270.952315},
{.value = 67,.restrictions = {53.394840,174.632652},.desirability = 1358.397092,.pheromone = 40.000000,.pdValue = 72401.258240},
{.value = 75,.restrictions = {63.076538,167.299723},.desirability = 1343.615093,.pheromone = 40.000000,.pdValue = 71222.679717},
{.value = 65,.restrictions = {34.477496,195.318982},.desirability = 1824.777289,.pheromone = 40.000000,.pdValue = 112725.144292},
{.value = 26,.restrictions = {15.547384,237.835520},.desirability = 1329.278565,.pheromone = 40.000000,.pdValue = 70085.794659},
{.value = 90,.restrictions = {35.214847,221.925509},.desirability = 2177.139007,.pheromone = 40.000000,.pdValue = 146904.546767},
{.value = 19,.restrictions = {59.315505,201.534858},.desirability = 300.477447,.pheromone = 40.000000,.pdValue = 7532.234268},
{.value = 33,.restrictions = {23.527081,240.905843},.desirability = 1100.715890,.pheromone = 40.000000,.pdValue = 52810.326592},
{.value = 3,.restrictions = {46.041323,219.882093},.desirability = 56.022216,.pheromone = 40.000000,.pdValue = 606.382167},
{.value = 87,.restrictions = {72.240076,193.408674},.desirability = 1177.177065,.pheromone = 40.000000,.pdValue = 58407.509391},
{.value = 36,.restrictions = {99.798005,167.766233},.desirability = 406.492720,.pheromone = 40.000000,.pdValue = 11851.823015},
{.value = 61,.restrictions = {13.432611,254.403567},.desirability = 3374.604569,.pheromone = 40.000000,.pdValue = 283491.691004},
{.value = 14,.restrictions = {59.117301,210.299337},.desirability = 212.888505,.pheromone = 40.000000,.pdValue = 4491.943843},
{.value = 11,.restrictions = {61.615557,234.058238},.desirability = 144.196611,.pheromone = 40.000000,.pdValue = 2504.024544},
{.value = 51,.restrictions = {47.013352,248.689976},.desirability = 824.645627,.pheromone = 40.000000,.pdValue = 34245.778181},
{.value = 14,.restrictions = {52.260902,248.641069},.desirability = 203.683079,.pheromone = 40.000000,.pdValue = 4203.764970},
{.value = 89,.restrictions = {94.577412,206.442137},.desirability = 861.749251,.pheromone = 40.000000,.pdValue = 36582.836080},
{.value = 29,.restrictions = {33.472889,273.182301},.desirability = 599.554852,.pheromone = 40.000000,.pdValue = 21229.970061},
{.value = 17,.restrictions = {74.634603,241.606621},.desirability = 178.228250,.pheromone = 40.000000,.pdValue = 3440.890194},
{.value = 24,.restrictions = {83.065926,233.171388},.desirability = 234.255478,.pheromone = 40.000000,.pdValue = 5184.902968},
{.value = 38,.restrictions = {38.497821,285.232092},.desirability = 654.222895,.pheromone = 40.000000,.pdValue = 24198.843263},
{.value = 84,.restrictions = {88.950401,246.289894},.desirability = 724.872240,.pheromone = 40.000000,.pdValue = 28222.676735},
{.value = 72,.restrictions = {61.318498,276.430962},.desirability = 803.028552,.pheromone = 40.000000,.pdValue = 32908.075101},
{.value = 2,.restrictions = {16.502030,327.979710},.desirability = 69.858994,.pheromone = 40.000000,.pdValue = 844.383012},
{.value = 88,.restrictions = {68.769430,278.106449},.desirability = 869.867026,.pheromone = 40.000000,.pdValue = 37100.973168},
{.value = 78,.restrictions = {29.720968,317.868846},.desirability = 1560.847133,.pheromone = 40.000000,.pdValue = 89175.705894},
{.value = 64,.restrictions = {76.093617,277.612907},.desirability = 572.754850,.pheromone = 40.000000,.pdValue = 19822.533599},
{.value = 46,.restrictions = {68.895050,289.316121},.desirability = 436.288597,.pheromone = 40.000000,.pdValue = 13178.524622},
{.value = 50,.restrictions = {12.565249,362.653062},.desirability = 2074.360522,.pheromone = 40.000000,.pdValue = 136625.686454},
{.value = 75,.restrictions = {92.295916,283.167829},.desirability = 542.514750,.pheromone = 40.000000,.pdValue = 18273.566791},
{.value = 16,.restrictions = {40.393967,346.601849},.desirability = 216.047518,.pheromone = 40.000000,.pdValue = 4592.296495},
{.value = 55,.restrictions = {72.067223,315.233054},.desirability = 457.688323,.pheromone = 40.000000,.pdValue = 14159.918288},
{.value = 79,.restrictions = {94.670304,292.812614},.desirability = 538.766046,.pheromone = 40.000000,.pdValue = 18084.492514},
{.value = 60,.restrictions = {14.330580,373.489097},.desirability = 2119.269674,.pheromone = 40.000000,.pdValue = 141086.459270},
{.value = 77,.restrictions = {70.058003,330.172007},.desirability = 629.316916,.pheromone = 40.000000,.pdValue = 22830.220564},
{.value = 1,.restrictions = {65.153762,339.821574},.desirability = 8.538592,.pheromone = 40.000000,.pdValue = 36.081564},
{.value = 59,.restrictions = {24.819067,389.540605},.desirability = 1153.693656,.pheromone = 40.000000,.pdValue = 56668.505049},
{.value = 21,.restrictions = {89.050587,338.390104},.desirability = 131.747244,.pheromone = 40.000000,.pdValue = 2186.846530},
{.value = 60,.restrictions = {18.447040,409.949849},.desirability = 1499.928309,.pheromone = 40.000000,.pdValue = 84006.279699},
{.value = 69,.restrictions = {72.891253,364.210580},.desirability = 491.357736,.pheromone = 40.000000,.pdValue = 15750.802894},
{.value = 19,.restrictions = {28.587234,417.614166},.desirability = 300.872796,.pheromone = 40.000000,.pdValue = 7547.104809},
{.value = 34,.restrictions = {89.807246,358.541763},.desirability = 199.620192,.pheromone = 40.000000,.pdValue = 4078.614902},
{.value = 39,.restrictions = {53.518176,393.975147},.desirability = 349.680294,.pheromone = 40.000000,.pdValue = 9456.114827},
{.value = 81,.restrictions = {67.942330,390.464024},.desirability = 577.218495,.pheromone = 40.000000,.pdValue = 20054.708620},
{.value = 67,.restrictions = {49.977223,411.539207},.desirability = 615.840365,.pheromone = 40.000000,.pdValue = 22100.811751},
{.value = 61,.restrictions = {47.321139,417.213755},.desirability = 584.107403,.pheromone = 40.000000,.pdValue = 20414.796948},
{.value = 96,.restrictions = {92.052761,380.554028},.desirability = 518.077548,.pheromone = 40.000000,.pdValue = 17052.896496},
{.value = 50,.restrictions = {29.459802,442.800353},.desirability = 724.617644,.pheromone = 40.000000,.pdValue = 28207.809129},
{.value = 83,.restrictions = {33.482168,457.581980},.desirability = 1024.170565,.pheromone = 40.000000,.pdValue = 47398.482076},
{.value = 21,.restrictions = {62.799451,434.853693},.desirability = 145.377422,.pheromone = 40.000000,.pdValue = 2534.845208},
{.value = 97,.restrictions = {86.813172,415.578714},.desirability = 508.287576,.pheromone = 40.000000,.pdValue = 16571.821258},
{.value = 10,.restrictions = {92.410917,422.334052},.desirability = 48.439238,.pheromone = 40.000000,.pdValue = 487.530682},
{.value = 11,.restrictions = {37.668806,478.105193},.desirability = 115.468640,.pheromone = 40.000000,.pdValue = 1794.328998},
{.value = 31,.restrictions = {71.352682,446.855996},.desirability = 183.806338,.pheromone = 40.000000,.pdValue = 3603.684166},
{.value = 73,.restrictions = {18.231647,521.734530},.desirability = 1450.855139,.pheromone = 40.000000,.pdValue = 79917.534582},
{.value = 60,.restrictions = {22.648936,517.596888},.desirability = 967.583555,.pheromone = 40.000000,.pdValue = 43524.993701},
{.value = 71,.restrictions = {33.622759,507.595583},.desirability = 786.473064,.pheromone = 40.000000,.pdValue = 31895.673624},
{.value = 32,.restrictions = {88.558914,453.903082},.desirability = 150.498180,.pheromone = 40.000000,.pdValue = 2669.948412},
{.value = 63,.restrictions = {52.012615,494.902823},.desirability = 462.688401,.pheromone = 40.000000,.pdValue = 14392.588823},
{.value = 68,.restrictions = {90.464918,463.112112},.desirability = 306.845148,.pheromone = 40.000000,.pdValue = 7772.932366},
{.value = 92,.restrictions = {48.507820,510.067422},.desirability = 702.951177,.pheromone = 40.000000,.pdValue = 26952.170358},
{.value = 80,.restrictions = {91.208912,475.347602},.desirability = 348.833420,.pheromone = 40.000000,.pdValue = 9421.783662},
{.value = 83,.restrictions = {33.368544,535.039525},.desirability = 878.884177,.pheromone = 40.000000,.pdValue = 37679.355699},
{.value = 37,.restrictions = {29.768956,541.296923},.desirability = 434.089462,.pheromone = 40.000000,.pdValue = 13079.009738},
{.value = 31,.restrictions = {44.979841,529.602588},.desirability = 246.019969,.pheromone = 40.000000,.pdValue = 5580.351286},
{.value = 5,.restrictions = {8.898894,565.230778},.desirability = 187.925125,.pheromone = 40.000000,.pdValue = 3725.488889},
{.value = 11,.restrictions = {16.148872,563.882364},.desirability = 228.369798,.pheromone = 40.000000,.pdValue = 4990.729162},
{.value = 32,.restrictions = {43.683853,538.892308},.desirability = 256.982614,.pheromone = 40.000000,.pdValue = 5957.466562},
{.value = 54,.restrictions = {9.220541,594.944191},.desirability = 1860.963308,.pheromone = 40.000000,.pdValue = 116094.785856},
{.value = 15,.restrictions = {41.601244,569.361824},.desirability = 119.721811,.pheromone = 40.000000,.pdValue = 1894.374826},
{.value = 11,.restrictions = {99.892990,514.688120},.desirability = 40.447363,.pheromone = 40.000000,.pdValue = 371.998610},
{.value = 60,.restrictions = {83.407708,544.394239},.desirability = 249.809083,.pheromone = 40.000000,.pdValue = 5709.766359},
{.value = 93,.restrictions = {47.170476,588.241198},.desirability = 633.627384,.pheromone = 40.000000,.pdValue = 23065.183079},
{.value = 69,.restrictions = {65.486468,588.804416},.desirability = 338.300894,.pheromone = 40.000000,.pdValue = 8998.305172},
{.value = 65,.restrictions = {44.612216,611.142485},.desirability = 450.706438,.pheromone = 40.000000,.pdValue = 13837.149786},
{.value = 53,.restrictions = {84.876010,575.399574},.desirability = 205.162537,.pheromone = 40.000000,.pdValue = 4249.649299},
{.value = 75,.restrictions = {47.842660,618.675531},.desirability = 479.026660,.pheromone = 40.000000,.pdValue = 15161.617172},
{.value = 97,.restrictions = {15.955970,656.489314},.desirability = 1750.642816,.pheromone = 40.000000,.pdValue = 105925.937887},
{.value = 78,.restrictions = {79.593560,599.290693},.desirability = 309.140440,.pheromone = 40.000000,.pdValue = 7860.311011},
{.value = 77,.restrictions = {90.525760,589.412193},.desirability = 272.819942,.pheromone = 40.000000,.pdValue = 6516.586531},
{.value = 10,.restrictions = {74.799668,626.705931},.desirability = 40.328606,.pheromone = 40.000000,.pdValue = 370.361480},
{.value = 34,.restrictions = {76.938845,627.771951},.desirability = 133.078541,.pheromone = 40.000000,.pdValue = 2220.077041},
{.value = 60,.restrictions = {66.822381,648.677773},.desirability = 261.683880,.pheromone = 40.000000,.pdValue = 6121.691704},
{.value = 41,.restrictions = {89.207180,638.298017},.desirability = 136.124792,.pheromone = 40.000000,.pdValue = 2296.740052},
{.value = 52,.restrictions = {97.160838,632.079825},.desirability = 160.072543,.pheromone = 40.000000,.pdValue = 2928.743013},
{.value = 40,.restrictions = {24.810535,719.425580},.desirability = 423.657271,.pheromone = 40.000000,.pdValue = 12610.374838},
{.value = 50,.restrictions = {97.291115,655.781890},.desirability = 148.154241,.pheromone = 40.000000,.pdValue = 2607.817102},
{.value = 54,.restrictions = {75.850736,678.160785},.desirability = 198.462276,.pheromone = 40.000000,.pdValue = 4043.178833},
{.value = 44,.restrictions = {0.821530,755.391614},.desirability = 13403.975985,.pheromone = 40.000000,.pdValue = 2244173.660182},
{.value = 78,.restrictions = {29.193751,726.319949},.desirability = 695.429973,.pheromone = 40.000000,.pdValue = 26520.768633},
{.value = 86,.restrictions = {18.525541,748.573495},.desirability = 1172.383761,.pheromone = 40.000000,.pdValue = 58051.131694},
{.value = 63,.restrictions = {83.692323,685.497445},.desirability = 207.599245,.pheromone = 40.000000,.pdValue = 4325.583026},
{.value = 23,.restrictions = {70.211686,702.047561},.desirability = 88.212185,.pheromone = 40.000000,.pdValue = 1198.115994},
{.value = 44,.restrictions = {65.575849,715.568165},.desirability = 177.269665,.pheromone = 40.000000,.pdValue = 3413.167768},
{.value = 69,.restrictions = {90.466620,694.585457},.desirability = 207.592530,.pheromone = 40.000000,.pdValue = 4325.373167},
{.value = 82,.restrictions = {49.859405,736.446212},.desirability = 422.184623,.pheromone = 40.000000,.pdValue = 12544.680830},
{.value = 63,.restrictions = {73.207570,723.911432},.desirability = 224.737634,.pheromone = 40.000000,.pdValue = 4872.139412},
{.value = 56,.restrictions = {1.950645,822.407880},.desirability = 6599.321341,.pheromone = 40.000000,.pdValue = 775273.453192},
{.value = 77,.restrictions = {96.368723,730.507010},.desirability = 206.779231,.pheromone = 40.000000,.pdValue = 4299.979381},
{.value = 10,.restrictions = {10.406150,827.502272},.desirability = 219.541893,.pheromone = 40.000000,.pdValue = 4704.160240},
{.value = 11,.restrictions = {64.897135,790.836764},.desirability = 40.518839,.pheromone = 40.000000,.pdValue = 372.985108},
{.value = 72,.restrictions = {20.435060,862.256538},.desirability = 772.496947,.pheromone = 40.000000,.pdValue = 31049.253013},
{.value = 63,.restrictions = {4.565998,886.569105},.desirability = 2942.177764,.pheromone = 40.000000,.pdValue = 230785.948156},
{.value = 17,.restrictions = {31.170562,924.140998},.desirability = 111.568792,.pheromone = 40.000000,.pdValue = 1704.198177},
{.value = 94,.restrictions = {17.719933,951.164900},.desirability = 1054.354463,.pheromone = 40.000000,.pdValue = 49509.205843},
{.value = 40,.restrictions = {49.894881,929.511329},.desirability = 163.051950,.pheromone = 40.000000,.pdValue = 3010.890719},
{.value = 40,.restrictions = {21.550764,960.034678},.desirability = 365.499750,.pheromone = 40.000000,.pdValue = 10105.007162},
{.value = 89,.restrictions = {64.287519,920.711495},.desirability = 284.260460,.pheromone = 40.000000,.pdValue = 6930.757155},
{.value = 7,.restrictions = {20.863181,976.698899},.desirability = 64.943172,.pheromone = 40.000000,.pdValue = 756.843774},
{.value = 39,.restrictions = {63.946808,959.032536},.desirability = 120.223419,.pheromone = 40.000000,.pdValue = 1906.292807},
{.value = 63,.restrictions = {19.507253,1008.125671},.desirability = 605.628690,.pheromone = 40.000000,.pdValue = 21553.393597},
{.value = 3,.restrictions = {1.005082,1025.782910},.desirability = 550.099050,.pheromone = 40.000000,.pdValue = 18658.096779},
{.value = 35,.restrictions = {69.400114,967.376935},.desirability = 98.557303,.pheromone = 40.000000,.pdValue = 1414.943884},
{.value = 52,.restrictions = {11.708470,1030.639003},.desirability = 814.654201,.pheromone = 40.000000,.pdValue = 33625.283212},
{.value = 11,.restrictions = {13.044496,1041.343727},.desirability = 153.090397,.pheromone = 40.000000,.pdValue = 2739.226371},
{.value = 68,.restrictions = {48.553553,1015.678064},.desirability = 260.680477,.pheromone = 40.000000,.pdValue = 6086.515889},
{.value = 13,.restrictions = {4.307351,1078.378311},.desirability = 529.101034,.pheromone = 40.000000,.pdValue = 17600.050534},
{.value = 26,.restrictions = {7.786948,1077.326143},.desirability = 585.916266,.pheromone = 40.000000,.pdValue = 20509.701133},
{.value = 96,.restrictions = {5.726662,1090.970422},.desirability = 2904.914921,.pheromone = 40.000000,.pdValue = 226415.484673},
{.value = 35,.restrictions = {20.968562,1092.994456},.desirability = 288.707531,.pheromone = 40.000000,.pdValue = 7094.032397},
{.value = 72,.restrictions = {63.702790,1080.663279},.desirability = 197.724429,.pheromone = 40.000000,.pdValue = 4020.652076},
{.value = 38,.restrictions = {76.144749,1073.817192},.desirability = 87.859750,.pheromone = 40.000000,.pdValue = 1190.942918},
{.value = 62,.restrictions = {64.447906,1085.178263},.desirability = 167.594002,.pheromone = 40.000000,.pdValue = 3137.572039},
{.value = 86,.restrictions = {27.033242,1125.544647},.desirability = 534.335800,.pheromone = 40.000000,.pdValue = 17861.889907},
{.value = 77,.restrictions = {33.690139,1119.810739},.desirability = 385.851312,.pheromone = 40.000000,.pdValue = 10960.641447},
{.value = 30,.restrictions = {63.936451,1096.145661},.desirability = 80.924709,.pheromone = 40.000000,.pdValue = 1052.755976},
{.value = 89,.restrictions = {61.335388,1108.962247},.desirability = 247.365318,.pheromone = 40.000000,.pdValue = 5626.187658},
{.value = 60,.restrictions = {6.356619,1165.656360},.desirability = 1530.844952,.pheromone = 40.000000,.pdValue = 86616.934391},
{.value = 22,.restrictions = {66.998392,1104.881208},.desirability = 56.184872,.pheromone = 40.000000,.pdValue = 609.024959},
{.value = 19,.restrictions = {27.985350,1157.243135},.desirability = 110.911079,.pheromone = 40.000000,.pdValue = 1689.150679},
{.value = 60,.restrictions = {64.737348,1123.257381},.desirability = 155.988919,.pheromone = 40.000000,.pdValue = 2817.387761},
{.value = 7,.restrictions = {94.958044,1099.391165},.desirability = 12.676248,.pheromone = 40.000000,.pdValue = 65.266764},
{.value = 64,.restrictions = {70.183791,1124.885494},.desirability = 153.253893,.pheromone = 40.000000,.pdValue = 2743.615659},
{.value = 94,.restrictions = {49.693485,1149.879980},.desirability = 310.994402,.pheromone = 40.000000,.pdValue = 7931.126120},
{.value = 41,.restrictions = {56.298059,1153.451510},.desirability = 119.362464,.pheromone = 40.000000,.pdValue = 1885.852240},
{.value = 27,.restrictions = {65.141067,1149.401152},.desirability = 68.173242,.pheromone = 40.000000,.pdValue = 814.004722},
{.value = 21,.restrictions = {79.468856,1141.279895},.desirability = 43.773054,.pheromone = 40.000000,.pdValue = 418.809261},
{.value = 59,.restrictions = {17.299298,1210.711820},.desirability = 532.548822,.pheromone = 40.000000,.pdValue = 17772.361614},
{.value = 12,.restrictions = {36.479290,1195.711980},.desirability = 52.009774,.pheromone = 40.000000,.pdValue = 542.417195},
{.value = 45,.restrictions = {12.351572,1220.309746},.desirability = 564.412814,.pheromone = 40.000000,.pdValue = 19391.048709},
{.value = 24,.restrictions = {92.694292,1147.741569},.desirability = 42.647229,.pheromone = 40.000000,.pdValue = 402.756198},
{.value = 88,.restrictions = {50.065321,1194.779141},.desirability = 278.121600,.pheromone = 40.000000,.pdValue = 6707.459798},
{.value = 63,.restrictions = {50.488926,1199.743782},.desirability = 196.622218,.pheromone = 40.000000,.pdValue = 3987.079395},
{.value = 36,.restrictions = {55.472260,1200.916989},.desirability = 102.162223,.pheromone = 40.000000,.pdValue = 1493.280876},
{.value = 11,.restrictions = {39.105615,1232.763526},.desirability = 43.137053,.pheromone = 40.000000,.pdValue = 409.714846},
{.value = 35,.restrictions = {18.869936,1257.301138},.desirability = 278.891322,.pheromone = 40.000000,.pdValue = 6735.324137},
{.value = 48,.restrictions = {17.397117,1258.485318},.desirability = 414.469417,.pheromone = 40.000000,.pdValue = 12202.385322},
{.value = 41,.restrictions = {82.331373,1197.588682},.desirability = 78.611756,.pheromone = 40.000000,.pdValue = 1007.945955},
{.value = 58,.restrictions = {53.224972,1230.585988},.desirability = 167.408408,.pheromone = 40.000000,.pdValue = 3132.361643},
{.value = 23,.restrictions = {20.203049,1263.639807},.desirability = 170.319476,.pheromone = 40.000000,.pdValue = 3214.418857},
{.value = 58,.restrictions = {81.388228,1207.096277},.desirability = 111.609503,.pheromone = 40.000000,.pdValue = 1705.131031},
{.value = 53,.restrictions = {62.083075,1232.772831},.desirability = 130.917069,.pheromone = 40.000000,.pdValue = 2166.209276},
{.value = 12,.restrictions = {88.127976,1206.654294},.desirability = 21.333459,.pheromone = 40.000000,.pdValue = 142.494435},
{.value = 43,.restrictions = {93.482217,1208.783566},.desirability = 71.939528,.pheromone = 40.000000,.pdValue = 882.383497},
{.value = 67,.restrictions = {41.542018,1262.763372},.desirability = 241.458176,.pheromone = 40.000000,.pdValue = 5425.863593},
{.value = 65,.restrictions = {25.180390,1296.011436},.desirability = 376.546622,.pheromone = 40.000000,.pdValue = 10566.572400},
{.value = 40,.restrictions = {66.053701,1256.877433},.desirability = 91.084943,.pheromone = 40.000000,.pdValue = 1257.117533},
{.value = 6,.restrictions = {7.888913,1317.456029},.desirability = 109.137663,.pheromone = 40.000000,.pdValue = 1648.799973},
{.value = 23,.restrictions = {26.785102,1303.811187},.desirability = 124.507786,.pheromone = 40.000000,.pdValue = 2009.096358},
{.value = 56,.restrictions = {48.001007,1294.854757},.desirability = 170.330847,.pheromone = 40.000000,.pdValue = 3214.740778},
{.value = 52,.restrictions = {83.991667,1264.015682},.desirability = 92.595815,.pheromone = 40.000000,.pdValue = 1288.525566},
{.value = 70,.restrictions = {31.539072,1327.189183},.desirability = 316.149848,.pheromone = 40.000000,.pdValue = 8129.156150},
{.value = 64,.restrictions = {22.753813,1337.150957},.desirability = 397.669268,.pheromone = 40.000000,.pdValue = 11468.035889},
{.value = 38,.restrictions = {14.127132,1353.767459},.desirability = 375.631667,.pheromone = 40.000000,.pdValue = 10528.082900},
{.value = 31,.restrictions = {26.526247,1345.199403},.desirability = 164.238852,.pheromone = 40.000000,.pdValue = 3043.826193},
{.value = 53,.restrictions = {20.494214,1357.404000},.desirability = 360.173835,.pheromone = 40.000000,.pdValue = 9884.944610},
{.value = 9,.restrictions = {19.625278,1360.131161},.desirability = 63.741546,.pheromone = 40.000000,.pdValue = 735.935723},
{.value = 70,.restrictions = {67.556681,1311.516290},.desirability = 149.359457,.pheromone = 40.000000,.pdValue = 2639.703125},
{.value = 74,.restrictions = {18.810517,1366.743483},.desirability = 544.152544,.pheromone = 40.000000,.pdValue = 18356.378104},
{.value = 49,.restrictions = {79.625511,1314.117470},.desirability = 88.529159,.pheromone = 40.000000,.pdValue = 1204.579617},
{.value = 61,.restrictions = {32.487016,1369.124302},.desirability = 259.270926,.pheromone = 40.000000,.pdValue = 6037.216191},
{.value = 96,.restrictions = {59.069693,1348.877675},.desirability = 227.777401,.pheromone = 40.000000,.pdValue = 4971.322614},
{.value = 4,.restrictions = {6.824279,1402.871405},.desirability = 78.988162,.pheromone = 40.000000,.pdValue = 1015.193932},
{.value = 41,.restrictions = {31.063251,1391.817134},.desirability = 179.279841,.pheromone = 40.000000,.pdValue = 3471.388225},
{.value = 76,.restrictions = {26.182111,1398.790595},.desirability = 392.313184,.pheromone = 40.000000,.pdValue = 11237.128690},
{.value = 67,.restrictions = {87.961439,1341.279392},.desirability = 107.359358,.pheromone = 40.000000,.pdValue = 1608.665916},
{.value = 35,.restrictions = {81.583412,1352.377495},.desirability = 59.971502,.pheromone = 40.000000,.pdValue = 671.619639},
{.value = 90,.restrictions = {35.360838,1404.672826},.desirability = 342.548022,.pheromone = 40.000000,.pdValue = 9168.286920},
{.value = 64,.restrictions = {35.727844,1406.936642},.desirability = 240.699568,.pheromone = 40.000000,.pdValue = 5400.313405},
{.value = 65,.restrictions = {59.472844,1385.452532},.desirability = 149.135036,.pheromone = 40.000000,.pdValue = 2633.755908},
{.value = 41,.restrictions = {2.236932,1463.433823},.desirability = 2367.743556,.pheromone = 40.000000,.pdValue = 166612.658496},
{.value = 40,.restrictions = {81.569306,1400.015198},.desirability = 66.218167,.pheromone = 40.000000,.pdValue = 779.240885},
{.value = 46,.restrictions = {78.196401,1414.945240},.desirability = 78.597388,.pheromone = 40.000000,.pdValue = 1007.669633},
{.value = 19,.restrictions = {62.086354,1430.572159},.desirability = 40.441230,.pheromone = 40.000000,.pdValue = 371.914005},
{.value = 41,.restrictions = {36.534356,1465.847744},.desirability = 144.733885,.pheromone = 40.000000,.pdValue = 2518.032484},
{.value = 77,.restrictions = {80.431351,1427.554718},.desirability = 126.779572,.pheromone = 40.000000,.pdValue = 2064.333788},
{.value = 92,.restrictions = {63.753317,1462.864166},.desirability = 186.490933,.pheromone = 40.000000,.pdValue = 3682.922523},
{.value = 73,.restrictions = {28.787194,1503.215198},.desirability = 318.918017,.pheromone = 40.000000,.pdValue = 8236.156340},
{.value = 39,.restrictions = {30.888097,1501.074688},.desirability = 159.018569,.pheromone = 40.000000,.pdValue = 2899.864857},
{.value = 68,.restrictions = {3.432884,1536.296446},.desirability = 2437.538082,.pheromone = 40.000000,.pdValue = 174033.603768},
{.value = 45,.restrictions = {98.653478,1445.027280},.desirability = 59.676144,.pheromone = 40.000000,.pdValue = 666.664184},
{.value = 53,.restrictions = {58.433889,1485.855630},.desirability = 115.401418,.pheromone = 40.000000,.pdValue = 1792.762318},
{.value = 1,.restrictions = {58.071951,1499.277576},.desirability = 2.171342,.pheromone = 40.000000,.pdValue = 4.626988},
{.value = 81,.restrictions = {39.038593,1519.826536},.desirability = 258.091393,.pheromone = 40.000000,.pdValue = 5996.064303},
{.value = 69,.restrictions = {38.627239,1524.564677},.desirability = 221.506387,.pheromone = 40.000000,.pdValue = 4767.441566},
{.value = 42,.restrictions = {1.038151,1588.235789},.desirability = 4815.602751,.pheromone = 40.000000,.pdValue = 483261.257788},
{.value = 47,.restrictions = {8.876372,1582.475980},.desirability = 632.560272,.pheromone = 40.000000,.pdValue = 23006.940450},
{.value = 82,.restrictions = {57.545204,1535.603587},.desirability = 175.429363,.pheromone = 40.000000,.pdValue = 3360.155900},
{.value = 64,.restrictions = {92.389515,1502.083160},.desirability = 87.184642,.pheromone = 40.000000,.pdValue = 1177.242638},
{.value = 83,.restrictions = {95.916210,1499.819216},.desirability = 109.074655,.pheromone = 40.000000,.pdValue = 1647.372352},
{.value = 4,.restrictions = {26.118156,1578.688929},.desirability = 18.339927,.pheromone = 40.000000,.pdValue = 113.580142},
{.value = 59,.restrictions = {63.958211,1542.714822},.desirability = 113.043796,.pheromone = 40.000000,.pdValue = 1738.105347},
{.value = 69,.restrictions = {38.691278,1571.119640},.desirability = 214.587016,.pheromone = 40.000000,.pdValue = 4545.808742},
{.value = 27,.restrictions = {66.045290,1547.377835},.desirability = 49.946174,.pheromone = 40.000000,.pdValue = 510.457198},
{.value = 44,.restrictions = {81.483415,1531.427089},.desirability = 66.659770,.pheromone = 40.000000,.pdValue = 787.048896},
{.value = 78,.restrictions = {52.911125,1562.836289},.desirability = 178.324411,.pheromone = 40.000000,.pdValue = 3443.675307},
{.value = 74,.restrictions = {12.984753,1607.593738},.desirability = 670.190708,.pheromone = 40.000000,.pdValue = 25090.169923},
{.value = 62,.restrictions = {28.465412,1593.403986},.desirability = 258.419335,.pheromone = 40.000000,.pdValue = 6007.496224},
{.value = 93,.restrictions = {22.561713,1599.563068},.desirability = 487.176352,.pheromone = 40.000000,.pdValue = 15550.175594},
{.value = 85,.restrictions = {39.741101,1587.888525},.desirability = 254.645321,.pheromone = 40.000000,.pdValue = 5876.375631},
{.value = 19,.restrictions = {46.074879,1582.425490},.desirability = 49.265490,.pheromone = 40.000000,.pdValue = 500.057806},
{.value = 18,.restrictions = {24.386206,1615.816299},.desirability = 86.360066,.pheromone = 40.000000,.pdValue = 1160.580967},
{.value = 18,.restrictions = {93.802531,1545.637799},.desirability = 23.470746,.pheromone = 40.000000,.pdValue = 164.435791},
{.value = 25,.restrictions = {14.154542,1627.935833},.desirability = 205.108467,.pheromone = 40.000000,.pdValue = 4247.969439},
{.value = 52,.restrictions = {5.325718,1647.267696},.desirability = 1120.566533,.pheromone = 40.000000,.pdValue = 54245.344386},
{.value = 11,.restrictions = {67.623222,1586.298316},.desirability = 19.386020,.pheromone = 40.000000,.pdValue = 123.435184},
{.value = 48,.restrictions = {75.849538,1577.259490},.desirability = 75.851090,.pheromone = 40.000000,.pdValue = 955.319720},
{.value = 32,.restrictions = {94.350598,1559.590686},.desirability = 41.112262,.pheromone = 40.000000,.pdValue = 381.208921},
{.value = 28,.restrictions = {24.312417,1638.511270},.desirability = 132.879240,.pheromone = 40.000000,.pdValue = 2215.091672},
{.value = 76,.restrictions = {30.144356,1637.804287},.desirability = 291.019614,.pheromone = 40.000000,.pdValue = 7179.420465},
{.value = 49,.restrictions = {22.936346,1670.861879},.desirability = 241.717439,.pheromone = 40.000000,.pdValue = 5434.604899},
{.value = 31,.restrictions = {65.883431,1637.281086},.desirability = 54.329902,.pheromone = 40.000000,.pdValue = 579.114426},
{.value = 92,.restrictions = {68.755643,1638.592063},.desirability = 154.377965,.pheromone = 40.000000,.pdValue = 2773.856360},
{.value = 56,.restrictions = {42.906838,1676.884183},.desirability = 147.141484,.pheromone = 40.000000,.pdValue = 2581.122969},
{.value = 16,.restrictions = {50.594368,1675.018883},.desirability = 35.692320,.pheromone = 40.000000,.pdValue = 308.367196},
{.value = 94,.restrictions = {80.064747,1646.863591},.desirability = 134.773831,.pheromone = 40.000000,.pdValue = 2262.634254},
{.value = 30,.restrictions = {70.972114,1658.277798},.desirability = 48.189554,.pheromone = 40.000000,.pdValue = 483.766024},
{.value = 71,.restrictions = {52.055992,1681.957277},.desirability = 153.302538,.pheromone = 40.000000,.pdValue = 2744.922066},
{.value = 61,.restrictions = {49.495961,1692.453845},.desirability = 137.663854,.pheromone = 40.000000,.pdValue = 2335.801230},
{.value = 46,.restrictions = {33.966937,1710.600428},.desirability = 149.668205,.pheromone = 40.000000,.pdValue = 2647.892356},
{.value = 40,.restrictions = {91.346154,1657.420790},.desirability = 49.947485,.pheromone = 40.000000,.pdValue = 510.477297},
{.value = 91,.restrictions = {62.398498,1689.972753},.desirability = 163.141420,.pheromone = 40.000000,.pdValue = 3013.369287},
{.value = 1,.restrictions = {53.529504,1703.428301},.desirability = 2.073288,.pheromone = 40.000000,.pdValue = 4.317133},
{.value = 95,.restrictions = {12.671418,1744.790135},.desirability = 812.328809,.pheromone = 40.000000,.pdValue = 33481.413358},
{.value = 100,.restrictions = {5.878729,1754.025743},.desirability = 1833.400224,.pheromone = 40.000000,.pdValue = 113525.106793},
{.value = 50,.restrictions = {46.634384,1712.990109},.desirability = 118.327472,.pheromone = 40.000000,.pdValue = 1861.377149},
{.value = 47,.restrictions = {44.136899,1716.114247},.desirability = 117.307702,.pheromone = 40.000000,.pdValue = 1837.366482},
{.value = 94,.restrictions = {85.002525,1679.777360},.desirability = 124.457475,.pheromone = 40.000000,.pdValue = 2007.878716},
{.value = 17,.restrictions = {27.754161,1742.700025},.desirability = 66.446920,.pheromone = 40.000000,.pdValue = 783.282251},
{.value = 20,.restrictions = {77.852319,1704.134354},.desirability = 28.499110,.pheromone = 40.000000,.pdValue = 220.015328},
{.value = 22,.restrictions = {47.652451,1743.844302},.desirability = 50.050269,.pheromone = 40.000000,.pdValue = 512.053832},
{.value = 49,.restrictions = {16.148576,1777.769524},.desirability = 322.673339,.pheromone = 40.000000,.pdValue = 8382.057273},
{.value = 94,.restrictions = {32.791871,1761.187826},.desirability = 307.703661,.pheromone = 40.000000,.pdValue = 7805.576685},
{.value = 30,.restrictions = {36.040709,1768.727623},.desirability = 88.970012,.pheromone = 40.000000,.pdValue = 1213.588560},
{.value = 2,.restrictions = {84.589726,1719.581212},.desirability = 2.599360,.pheromone = 40.000000,.pdValue = 6.060459},
{.value = 10,.restrictions = {98.120305,1706.018690},.desirability = 11.293642,.pheromone = 40.000000,.pdValue = 54.885423},
{.value = 22,.restrictions = {60.850946,1744.323653},.desirability = 39.183656,.pheromone = 40.000000,.pdValue = 354.701838},
{.value = 17,.restrictions = {44.290400,1772.142949},.desirability = 40.946543,.pheromone = 40.000000,.pdValue = 378.906335},
{.value = 37,.restrictions = {30.776403,1788.574318},.desirability = 127.073081,.pheromone = 40.000000,.pdValue = 2071.506685},
{.value = 40,.restrictions = {70.753640,1750.955600},.desirability = 61.039751,.pheromone = 40.000000,.pdValue = 689.644264},
{.value = 70,.restrictions = {33.097804,1789.752579},.desirability = 223.399682,.pheromone = 40.000000,.pdValue = 4828.695553},
{.value = 100,.restrictions = {57.908626,1767.466179},.desirability = 184.706556,.pheromone = 40.000000,.pdValue = 3630.190920},
{.value = 95,.restrictions = {91.669155,1737.642533},.desirability = 112.750018,.pheromone = 40.000000,.pdValue = 1731.334294},
{.value = 42,.restrictions = {17.375905,1822.927474},.desirability = 250.673916,.pheromone = 40.000000,.pdValue = 5739.442622},
{.value = 80,.restrictions = {86.576008,1758.740546},.desirability = 99.327005,.pheromone = 40.000000,.pdValue = 1431.551601},
{.value = 89,.restrictions = {36.919780,1808.919436},.desirability = 251.934913,.pheromone = 40.000000,.pdValue = 5782.804793},
{.value = 8,.restrictions = {0.914080,1853.831342},.desirability = 892.508174,.pheromone = 40.000000,.pdValue = 38558.870400},
{.value = 35,.restrictions = {1.402807,1855.015300},.desirability = 2542.724823,.pheromone = 40.000000,.pdValue = 185419.345314},
{.value = 30,.restrictions = {24.784838,1833.542029},.desirability = 124.801839,.pheromone = 40.000000,.pdValue = 2016.217951},
{.value = 61,.restrictions = {77.183245,1785.674328},.desirability = 83.672208,.pheromone = 40.000000,.pdValue = 1106.822147},
{.value = 75,.restrictions = {20.620171,1849.737278},.desirability = 371.736865,.pheromone = 40.000000,.pdValue = 10364.764719},
{.value = 54,.restrictions = {2.156733,1869.884318},.desirability = 2531.391699,.pheromone = 40.000000,.pdValue = 184181.084771},
{.value = 53,.restrictions = {18.124732,1862.944983},.desirability = 296.743311,.pheromone = 40.000000,.pdValue = 7392.262961},
{.value = 79,.restrictions = {68.625342,1829.430357},.desirability = 118.960662,.pheromone = 40.000000,.pdValue = 1876.337930},
{.value = 86,.restrictions = {44.236212,1855.542599},.desirability = 198.073453,.pheromone = 40.000000,.pdValue = 4031.302694},
{.value = 37,.restrictions = {32.818297,1870.601058},.desirability = 113.941307,.pheromone = 40.000000,.pdValue = 1758.845908},
{.value = 96,.restrictions = {94.916627,1808.263643},.desirability = 105.741111,.pheromone = 40.000000,.pdValue = 1572.431736},
{.value = 47,.restrictions = {65.030240,1838.919115},.desirability = 74.301325,.pheromone = 40.000000,.pdValue = 926.191591},
{.value = 20,.restrictions = {48.623011,1854.423444},.desirability = 41.932999,.pheromone = 40.000000,.pdValue = 392.680992},
{.value = 37,.restrictions = {65.561052,1841.393087},.desirability = 57.941000,.pheromone = 40.000000,.pdValue = 637.800677},
{.value = 24,.restrictions = {97.078096,1814.195340},.desirability = 25.762181,.pheromone = 40.000000,.pdValue = 189.094953},
{.value = 30,.restrictions = {90.540781,1828.321619},.desirability = 34.261084,.pheromone = 40.000000,.pdValue = 290.006450},
{.value = 13,.restrictions = {23.141412,1899.156866},.desirability = 55.920279,.pheromone = 40.000000,.pdValue = 604.727889},
{.value = 36,.restrictions = {80.868590,1846.150301},.desirability = 45.586081,.pheromone = 40.000000,.pdValue = 445.096711},
{.value = 63,.restrictions = {72.007299,1856.625073},.desirability = 89.087444,.pheromone = 40.000000,.pdValue = 1215.992082},
{.value = 75,.restrictions = {83.407235,1858.215447},.desirability = 91.482528,.pheromone = 40.000000,.pdValue = 1265.357466},
{.value = 44,.restrictions = {95.884378,1845.967737},.desirability = 46.995622,.pheromone = 40.000000,.pdValue = 465.899341},
{.value = 48,.restrictions = {81.647125,1859.528331},.desirability = 59.768757,.pheromone = 40.000000,.pdValue = 668.216712},
{.value = 55,.restrictions = {74.026459,1871.720736},.desirability = 75.043200,.pheromone = 40.000000,.pdValue = 940.097761},
{.value = 48,.restrictions = {59.457722,1894.204383},.desirability = 80.571754,.pheromone = 40.000000,.pdValue = 1045.876064},
{.value = 22,.restrictions = {48.016347,1904.658620},.desirability = 45.477135,.pheromone = 40.000000,.pdValue = 443.502060},
{.value = 37,.restrictions = {51.583391,1909.236478},.desirability = 71.024600,.pheromone = 40.000000,.pdValue = 865.603882},
{.value = 44,.restrictions = {93.217588,1868.538611},.desirability = 47.756162,.pheromone = 40.000000,.pdValue = 477.254607},
{.value = 77,.restrictions = {98.482791,1876.507574},.desirability = 78.769255,.pheromone = 40.000000,.pdValue = 1010.976608},
{.value = 74,.restrictions = {65.828083,1938.069763},.desirability = 109.654835,.pheromone = 40.000000,.pdValue = 1660.533630},
{.value = 6,.restrictions = {16.201809,1999.987785},.desirability = 35.005563,.pheromone = 40.000000,.pdValue = 299.510194},
{.value = 47,.restrictions = {88.489622,1937.826166},.desirability = 51.816418,.pheromone = 40.000000,.pdValue = 539.395201},
{.value = 73,.restrictions = {64.046088,1971.204792},.desirability = 109.313850,.pheromone = 40.000000,.pdValue = 1652.794219},
{.value = 45,.restrictions = {47.997462,1990.813211},.desirability = 89.030828,.pheromone = 40.000000,.pdValue = 1214.833102},
{.value = 88,.restrictions = {83.188235,1960.924846},.desirability = 101.985045,.pheromone = 40.000000,.pdValue = 1489.397905},
{.value = 60,.restrictions = {65.891490,1991.069897},.desirability = 86.459376,.pheromone = 40.000000,.pdValue = 1162.583462},
{.value = 75,.restrictions = {90.384951,1968.831903},.desirability = 79.677038,.pheromone = 40.000000,.pdValue = 1028.503492}
};

#endif

