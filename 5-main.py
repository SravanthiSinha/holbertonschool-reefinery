import MySQLdb

#connecting to mysql db

connect = MySQLdb.connect(host="173.246.108.142",
                          port=3306,
                          user="student",
                          passwd="aLQQLXGQp2rJ4Wy5",
                          db="Project_169"
                      )

curse = connect.cursor()

get_shows="SELECT TVShow.name, TVShow.id FROM TVShow ORDER BY TVShow.name"

get_seasons =" SELECT Season.id, Season.number FROM Season WHERE Season.tvshow_id = "



shows = []

curse.execute(get_shows);

fetch = curse.fetchall()

for show in fetch:
    curse.execute(get_seasons+str(show[1]))
    seasons=curse.fetchall()
    print show[0]+":"
    for s in seasons:
        print "\t Season "+str(s[1])
        get_episodes = "SELECT Episode.name, Episode.number FROM Episode where Episode.season_id= "+ str(s[0]) + " ORDER BY Episode.number"
        curse.execute(get_episodes)
        episodes =curse.fetchall()
        for e in episodes:
            print "\t\t"+str(e[1])+": "+str(e[0])
    
