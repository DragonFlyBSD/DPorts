# Created by: Konrad Heuer
# $FreeBSD: databases/useracc/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
