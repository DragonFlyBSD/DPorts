# New ports collection makefile for:	p5-FreeBSD-Pkgs-Findupdates
# Date created:		2009-04-01
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/ports-mgmt/p5-FreeBSD-Pkgs-FindUpdates/Makefile,v 1.7 2012/11/17 06:00:45 svnexp Exp $
#

PORTNAME=	FreeBSD-Pkgs-FindUpdates
PORTVERSION=	0.3.0
CATEGORIES=	ports-mgmt sysutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Finds updates for FreeBSD pkgs by checking the ports index

BUILD_DEPENDS=	p5-Error-Helper>=0:${PORTSDIR}/devel/p5-Error-Helper \
		p5-FreeBSD-Pkgs>=0:${PORTSDIR}/ports-mgmt/p5-FreeBSD-Pkgs \
		p5-FreeBSD-Ports-INDEXhash>=0:${PORTSDIR}/ports-mgmt/p5-FreeBSD-Ports-INDEXhash \
		p5-Sort-Versions>=0:${PORTSDIR}/devel/p5-Sort-Versions
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		FreeBSD::Pkgs::FindUpdates.3

.include <bsd.port.mk>
