# New ports collection makefile for:	textproc/p5-Regexp-Common-net-CIDR
# Date created:				01 September 2011
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Regexp-Common-net-CIDR/Makefile,v 1.2 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Regexp-Common-net-CIDR
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Provide patterns for CIDR blocks

BUILD_DEPENDS=	p5-Regexp-Common>0:${PORTSDIR}/textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Regexp::Common::net::CIDR.3

.include <bsd.port.mk>
