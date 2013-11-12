# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD: graphics/p5-GD-Graph/Makefile 332801 2013-11-05 01:33:02Z vanilla $

PORTNAME=	GD-Graph
PORTVERSION=	1.48
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	GDGraph-${DISTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Graph plotting module for perl5

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD \
		p5-GD-TextUtil>=0:${PORTSDIR}/graphics/p5-GD-TextUtil
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-ExtUtils-MakeMaker>=6.58:${PORTSDIR}/devel/p5-ExtUtils-MakeMaker
.endif

.include <bsd.port.post.mk>
