# Created by: sheldonh@FreeBSD.org
# $FreeBSD: mail/exim-monitor/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	-monitor

COMMENT=	The Exim monitor for the Exim MTA

MASTERDIR=	${.CURDIR}/../exim
PKGDIR=		${.CURDIR}

EXIMON_ONLY=	yes

# This dependency is disabled, because it prevents package users from
# using the exim-monitor package with any of the exim slave packages.
#
#RUN_DEPENDS=	${LOCALBASE}/sbin/exim:${PORTSDIR}/mail/exim

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
