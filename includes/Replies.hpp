#define once

#define PREFIX ":IRCServer "
#define POSTFIX "\r\n" 

//Errors :
#define ERR_NICKNAMEINUSE(target)						        PREFIX "433 " + target + " :Nickname is already in use" POSTFIX 
#define ERR_NEEDMOREPARAMS(command)						        PREFIX "461 " + command + " :Not enough parameters" POSTFIX  
#define ERR_UNKNOWNCOMMAND(client, command)						PREFIX "421 " + client + " " + command + " :Unknown command" POSTFIX 
#define ERR_CHANOPRIVSNEEDED(channel)					        PREFIX "482 " + channel + " :You're not channel operator" POSTFIX
#define ERR_ERRONEUSNICKNAME(nick)						        PREFIX "432 " + nick + " :Erroneus nickname" POSTFIX 
#define ERR_ERRUSER(nick)						                PREFIX "432 " + user + " :Erroneus user" POSTFIX 
#define ERR_NOTEXTTOSEND()								        PREFIX "412 :No text to send" POSTFIX 
#define ERR_NOSUCHCHANNEL(channel)						        PREFIX "403 " + channel + " :No such channel" POSTFIX 
#define ERR_NOSUCHNICK(nick)							        PREFIX "401 " + nick + " :No such nick/channel" POSTFIX 
#define ERR_NOTONCHANNEL(target, channel)	   			        PREFIX "442 " + target + " " + channel + " :You're not on that channel" POSTFIX 
#define ERR_USERNOTINCHANNEL(user, channel) 			        PREFIX "441 " + user + " " + channel + " :They aren't on that channel" POSTFIX 
#define ERR_NONICKNAMEGIVEN(target)           			        PREFIX "431 " + target + " :No nickname given" POSTFIX 
#define ERR_PASSWDMISMATCH(target)						        PREFIX "464 " + target + " :Password incorrect" POSTFIX 
#define ERR_ALREADYREGISTRED(target)					        PREFIX "462 " + target + " :You may not reregister" POSTFIX 
#define ERR_NOTREGISTERED								        "Error: You are not registered."
#define ERR_CHANNELISFULL(client, channel)				        PREFIX " 471 " + client + " " + channel + " :Cannot join channel (+l)" POSTFIX
#define ERR_INVITEONLYCHAN(client, channel)				        PREFIX " 473 " + client + " " + channel + " :Cannot join channel (+i)" POSTFIX
#define ERR_NEEDMODEPARM(channelname, mode)				        (std::string(": 696 ") + channelname + " * You must specify a parameter for the key mode. " + mode + POSTFIX)
#define ERR_INVALIDMODEPARM(channelname, mode)			        (std::string(": 696 ") + channelname + " Invalid mode parameter. " + mode + POSTFIX)
#define ERR_UNKNOWNMODE(nickname, channelname, mode)	        (std::string(": 472 ") + nickname + " " + channelname + " " + mode + " :is not a recognised channel mode" POSTFIX)
#define ERR_INCORPASS(nickname)							        (": 464 " + nickname + " :Password incorrect !" + POSTFIX )
#define ERR_BADCHANNELKEY(client, channel)					    PREFIX "476 " + client + " " + channel + " :Cannot join channel (+k)" POSTFIX
#define ERR_BADCHANMASK(channel)					            PREFIX "475 " + channel + " :Bad Channel Mask" POSTFIX
#define ERR_USERONCHANNEL(target, channel)			            PREFIX "443 " + target + " " + channel + " :is already on channel" POSTFIX
#define ERR_USERDONOTMATCH(client)                              PREFIX "502 " + client + " :Cant change mode for other users" POSTFIX
#define ERR_CANNOTSENDTOCHAN(client, channel)		            PREFIX "404 " + client + channel + " :Cannot send to channel" POSTFIX
#define ERR_UMODEUNKNOWNFLAG(client)		                    PREFIX "501 " + client + " :Unknown MODE flag" POSTFIX

//Replays :
#define RPL_WELCOME(sender, msg)               			        PREFIX "001 " + sender + " : " + msg + POSTFIX 
#define RPL_NAMREPLY(sender, channel, users)    		        PREFIX "353 " + sender + " = " + channel + " :" + users + POSTFIX
#define RPL_ENDOFNAMES(sender, channel)        			        PREFIX "366 " + sender + " " + channel + " :End of /NAMES list." POSTFIX
#define RPL_TOPIC(sender, channel, topic)				        PREFIX "332 " + sender + " " + channel + " :" + topic + POSTFIX    
#define RPL_PRIVMSG(sender, target, msg)				        ":" + sender + " PRIVMSG " + target + " :" + msg + POSTFIX 
#define RPL_NICK(sender, nick)							        ":" + sender + " NICK " + nick + POSTFIX
#define RPL_NOTOPIC(sender, channel)					        PREFIX " 331 " + sender + " " + channel + " :No topic is set" POSTFIX
#define RPL_INVITING(nickname, targnick, targchan)  	        ": 341 " + nickname + " " + targnick + " " + targchan + POSTFIX
#define RPL_INVITE(sender, target, channel)				        ":" + sender + " INVITE " + target + " " + channel + POSTFIX
#define RPL_JOINMSG(hostname, ipaddress, channelname)	        (":" + hostname + "@" + ipaddress + " JOIN " + channelname + POSTFIX)
#define RPL_JOIN(sender, channel)						        ":" + sender + " JOIN :" + channel + POSTFIX
#define RPL_PART(sender, channel, reason)                       ":" + sender + " PART " + channel + " :" + reason + POSTFIX
#define RPL_CHANGEMODE(hostname, channelname, mode)		        (":" + hostname + " MODE " + channelname + " " + mode + POSTFIX)
#define RPL_UMODEIS(hostname, channelname, mode, user)	        ":" + hostname + " MODE " + channelname + " " + mode + " " + user + POSTFIX
#define RPL_CHANNELMODEIS(client ,channel ,modestring, args)    ": 324 " + client + " " + channel + " " + modestring + " " + args + POSTFIX
#define RPL_KICKMSG(sender, channel, target, comment)           ":" + sender + " KICK " + channel + " " + target + " :" + comment + POSTFIX
#define RPL_KICKDEFMSG(sender, channel, target)                 ":" + sender + " KICK " + channel + " " + target + POSTFIX