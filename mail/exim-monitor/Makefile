# New ports collection makefile for:	exim-monitor
# Date created:		27 August 2001
# Whom:			sheldonh@FreeBSD.org
#
# $FreeBSD: ports/mail/exim-monitor/Makefile,v 1.18 2012/11/17 05:59:02 svnexp Exp $
#

PKGNAMESUFFIX=	-monitor

COMMENT=	The Exim monitor for the Exim MTA

MASTERDIR=	${.CURDIR}/../exim
PKGDIR=		${.CURDIR}

EXIMON_ONLY=	yes

# This dependency is disabled, because it prevents package users from
# using the exim-monitor package with any of the exim slave packages.
#
#RUN_DEPENDS=	${LOCALBASE}/sbin/exim:${PORTSDIR}/mail/exim

.include "${MASTERDIR}/Makefile"
