# New ports collection makefile for:	devel/p5-Sub-Installer
# Date created:				12 January 2006
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Sub-Installer/Makefile,v 1.6 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	Sub-Installer
PORTVERSION=	0.0.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Sub::Installer - A clean way to (re)install package subroutines

BUILD_DEPENDS=	p5-version>0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Sub::Installer.3

.include <bsd.port.mk>
