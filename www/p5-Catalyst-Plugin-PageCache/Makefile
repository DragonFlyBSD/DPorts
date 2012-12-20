# Ports collection makefile for:	p5-Catalyst-Plugin-PageCache
# Date created:				Dec 19, 2005
# Whom:					Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-PageCache/Makefile,v 1.18 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-PageCache
PORTVERSION=	0.31
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cache the output of entire pages

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-MRO-Compat>=0.10:${PORTSDIR}/devel/p5-MRO-Compat \
		p5-Catalyst-Plugin-Cache>=0.08:${PORTSDIR}/www/p5-Catalyst-Plugin-Cache
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Cache-Cache>=0:${PORTSDIR}/devel/p5-Cache-Cache \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \

PERL_CONFIGURE=	yes

MAN3=		Catalyst::Plugin::PageCache.3

.include <bsd.port.mk>
