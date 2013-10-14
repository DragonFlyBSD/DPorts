# Created by: genserg@hotmail.com
# $FreeBSD: www/spawn-fcgi/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	spawn-fcgi
PORTVERSION=	1.6.3
CATEGORIES=	www
MASTER_SITES=	http://www.lighttpd.net/download/

MAINTAINER=	genserg@hotmail.com
COMMENT=	spawn-fcgi is used to spawn fastcgi applications

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_RC_SUBR=	spawn-fcgi

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		spawn-fcgi.1

PLIST_FILES=	bin/spawn-fcgi

NO_STAGE=	yes
.include <bsd.port.pre.mk>

SUB_LIST+=	REQUIRE="DAEMON"

.include <bsd.port.post.mk>
