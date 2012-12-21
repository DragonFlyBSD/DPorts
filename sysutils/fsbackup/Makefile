# New ports collection makefile for:   fsbackup
# Date created:        1 April 2005
# Whom:                samm
#
# $FreeBSD: ports/sysutils/fsbackup/Makefile,v 1.4 2012/11/17 06:01:31 svnexp Exp $
#

PORTNAME=	fsbackup
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.opennet.ru/dev/fsbackup/src/
DISTNAME=	fsbackup-1.2pl1

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	File system backup and synchronization utility

RUN_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net

USE_PERL5=	yes

MAN1=		fsbackup.1
MANCOMPRESSED=	no

NO_BUILD=	yes
NO_INSTALL_MANPAGES=yes

do-install:
	@cd ${WRKSRC};./install.pl --prefix=${PREFIX}/fsbackup --prefix-man=${MANPREFIX}/man/man1
	@${RM} ${PREFIX}/fsbackup/fsbackup.1

.include <bsd.port.mk>
