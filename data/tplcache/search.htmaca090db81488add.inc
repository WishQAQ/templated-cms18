<?php
$z[0]=Array("field","",165,188);
$z[0][4]['name']="seotitle";
$z[1]=Array("field","",233,262);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",306,364);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("global","",421,448);
$z[3][4]['name']="cfg_basehost";
$z[4]=Array("global","",537,564);
$z[4][4]['name']="cfg_basehost";
$z[5]=Array("global","",650,677);
$z[5][4]['name']="cfg_basehost";
$z[6]=Array("global","",758,785);
$z[6][4]['name']="cfg_basehost";
$z[7]=Array("global","",851,878);
$z[7][4]['name']="cfg_basehost";
$z[8]=Array("global","",930,957);
$z[8][4]['name']="cfg_basehost";
$z[9]=Array("include","",1031,1066);
$z[9][4]['filename']="head.htm";
$z[10]=Array("arclist","\r\n                 <a href=\"[field:arcurl /]\">\r\n                 <div class=\"gallery-item\" style=\"height: 400px; overflow: hidden;\">\r\n                     <img src=\"[field:picname /]\" class=\"img-responsive\">\r\n                     <div class=\"info\">\r\n                         <div class=\"info-con\">\r\n                             <h3>[field:title /]</h3>\r\n                             <p>[field:description function=\"cn_substr(@me,90)\"/]</p>\r\n                         </div>\r\n                     </div>\r\n                     <div class=\"img-caption\">\r\n                         <h3>[field:title /]</h3>\r\n                         <p>[field:pubdate function=\"GetDateMK(@me)\"/]</p>\r\n                     </div>\r\n                 </div>\r\n                 </a>\r\n                 ",1253,2084);
$z[10][4]['limit']="0,1";
$z[10][4]['orderby']="pubdate";
$z[11]=Array("arclist","\r\n                <div class=\"col-sm-12\" style=\"margin: 0;padding: 0px;\">\r\n                    <a href=\"[field:arcurl /]\">\r\n                    <div class=\"gallery-item\" style=\"height: 200px; overflow: hidden;\">\r\n                        <img src=\"{dede:global.cfg_basehost/}/style/img/img2.jpg\" class=\"img-responsive\">\r\n                        <div class=\"info\">\r\n                            <div class=\"info-con\">\r\n                                <h3>[field:title /]</h3>\r\n                                <p>[field:description function=\"cn_substr(@me,90)\"/]</p>\r\n                            </div>\r\n                        </div>\r\n                        <div class=\"img-caption\">\r\n                            <h3>[field:title /]</h3>\r\n                            <p>[field:pubdate function=\"GetDateMK(@me)\"/]</p>\r\n                        </div>\r\n                    </div>\r\n                    </a>                    \r\n                </div>\r\n                ",2204,3225);
$z[11][4]['limit']="1,2";
$z[11][4]['orderby']="pubdate";
$z[12]=Array("type","[field:typename /]",3431,3472);
$z[13]=Array("list","\r\n                <div class=\"view-content-left animated\" data-animation=\"bounceIn\" data-delay=\"0\">\r\n                    <a href=\"[field:arcurl /]\">\r\n                        <div class=\"gallery-item\">\r\n                            <img src=\"[field:picname /]\" class=\"img-responsive\">\r\n                            <div class=\"info\">\r\n                                <div class=\"info-con\">[field:typelink/]</div>\r\n                            </div>\r\n                        </div>\r\n                    </a>\r\n                    <div class=\"content1\">\r\n                        <h4><a href=\"[field:arcurl/]\">[field:title/]</a></h4>\r\n                        <p>[field:description function=\"cn_substr(@me,120)\"/]</p>\r\n                        <span class=\"pull-left\"><i class=\"fa fa-clock-o\"></i>[field:pubdate function=\"GetDateMK(@me)\"/]</span>\r\n                    </div>\r\n                    <div class=\"clearfix\"></div>\r\n                </div>\r\n                ",3495,4489);
$z[13][4]['pagesize']="5";
$z[14]=Array("pagelist","",4547,4599);
$z[14][4]['istitem']="index,pre,next,end,end,";
$z[15]=Array("arclist","\r\n                            <a href=\"[field:arcurl /]\"><img src=\"[field:picname /]\" style=\"float:left;height: 40px;width: 40px;border-radius: 50%;margin-right: 15px\">[field:title /]</a>\r\n                            ",4870,5154);
$z[15][4]['row']="4";
$z[15][4]['orderby']="click";
$z[15][4]['type']="image.";
$z[16]=Array("arclist","\r\n                            <a href=\"[field:arcurl /]\" target=\"_blank\"><img src=\"[field:picname /]\" class=\"img-responsive\" /></a>\r\n                            ",5334,5561);
$z[16][4]['row']="1";
$z[16][4]['orderby']="rand";
$z[16][4]['type']="image.";
$z[17]=Array("arclist","\r\n                            <a href=\"[field:arcurl /]\"><img src=\"[field:picname /]\" style=\"height: 40px;width: 40px;border-radius: 50%;margin-right: 15px\">[field:title /]</a>\r\n                            ",5787,6062);
$z[17][4]['row']="4";
$z[17][4]['orderby']="pubdate";
$z[17][4]['type']="image.";
$z[18]=Array("include","",6194,6231);
$z[18][4]['filename']="footer.htm";

?>