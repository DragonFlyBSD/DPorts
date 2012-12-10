# New ports collection makefile for:    useracc
# Date created:         December 20th, 2002
# Whom:                 Konrad Heuer
#
# $FreeBSD: ports/databases/useracc/Makefile,v 1.3 2012/11/17 05:55:25 svnexp Exp $
#

PORTNAME=	useracc
PORTVERSION=	3.1
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	ftp://gwdu111.gwdg.de/pub/FreeBSD/misc/ \
		ftp://gwdu112.gwdg.de/pub/FreeBSD/misc/

MAINTAINER=	kheuer@gwdg.de
COMMENT=	Special purpose database application

MAN1=		useracc.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/useracc etc/rc.d/useracc.sh.sample

CFLAGS+=	-DFreeBSD

.include <bsd.port.mk>
