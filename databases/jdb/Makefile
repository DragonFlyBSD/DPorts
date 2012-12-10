# New ports collection makefile for:	jdb
# Date created:				28 June 2002
# Whom:					Lars Eggert <larse@isi.edu>
#
# $FreeBSD: ports/databases/jdb/Makefile,v 1.9 2012/11/17 05:55:08 svnexp Exp $
#

PORTNAME=	jdb
PORTVERSION=	1.14
CATEGORIES=	databases perl5
MASTER_SITES=	http://www.isi.edu/~johnh/SOFTWARE/JDB/

MAINTAINER=	lars.eggert@gmx.net
COMMENT=	JDB manipulates flat-ASCII databases from shell scripts

USE_PERL5=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --datadir=${PREFIX}/lib/jdb

.include <bsd.port.mk>
