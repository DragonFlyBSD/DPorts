# $FreeBSD: net/silc-irssi-plugin/Makefile 327755 2013-09-20 22:10:23Z bapt $

CATEGORIES=	net irc

COMMENT=	SILC plugin for IRSSI

USE_LDCONFIG=	${PREFIX}/lib/irssi/modules

MASTERDIR=	${.CURDIR}/../silc-client
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr

CONFLICTS=	silc-toolkit-1.1.* silc-client-1.1.*

IRSSI_PLUGIN=	-irssi

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
