# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: deskutils/multisync-backup/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	multisync-backup

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multisync backup plugin

RUN_DEPENDS=	multisync:${PORTSDIR}/deskutils/multisync

DISTINFO_FILE=	${MASTERDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

WRKSRC=		${WRKDIR}/multisync-${PORTVERSION}/plugins/backup_plugin

MASTERDIR=	${.CURDIR}/../multisync

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
