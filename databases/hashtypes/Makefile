# Created by: Sevan Janiyan <venture37@geeklan.co.uk>
# $FreeBSD: databases/hashtypes/Makefile 323551 2013-07-23 21:02:49Z pawel $

PORTNAME=	hashtypes
PORTVERSION=	0.1.1
CATEGORIES=	databases security
MASTER_SITES=	http://api.pgxn.org/dist/hashtypes/${PORTVERSION}/ \
		http://oss-files.dreamindustries.co/mirror/

MAINTAINER=	oss-contrib@dreamindustries.co
COMMENT=	Hash data types for PostgreSQL

USE_PGSQL=	yes
USE_GMAKE=	yes
USE_ZIP=	yes

MAKE_ARGS=	USE_PGXS=1

.include <bsd.port.mk>
