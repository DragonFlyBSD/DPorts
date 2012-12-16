# Ports collection makefile for:  silc-irssi-plugin
# Date created:			  Sat Jul 28, 2007
# Whom:				  Wesley Shields <wxs@atarininja.org>
#
# $FreeBSD: ports/net/silc-irssi-plugin/Makefile,v 1.11 2012/11/17 06:00:20 svnexp Exp $
#

CATEGORIES=	net irc

COMMENT=	SILC plugin for IRSSI

USE_LDCONFIG=	${PREFIX}/lib/irssi/modules

MASTERDIR=	${.CURDIR}/../silc-client
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr

CONFLICTS=	silc-toolkit-1.1.* silc-client-1.1.*

IRSSI_PLUGIN=	-irssi

.include "${MASTERDIR}/Makefile"
