# Created by: Lars Eggert <larse@isi.edu>
# $FreeBSD: databases/jdb/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	jdb
PORTVERSION=	1.14
CATEGORIES=	databases perl5
MASTER_SITES=	http://www.isi.edu/~johnh/SOFTWARE/JDB/

MAINTAINER=	lars.eggert@gmx.net
COMMENT=	JDB manipulates flat-ASCII databases from shell scripts

USES=		perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --datadir=${PREFIX}/lib/jdb

NO_STAGE=	yes
.include <bsd.port.mk>
