# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: devel/p5-Algorithm-Merge/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Algorithm-Merge
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Three-way merge and diff

RUN_DEPENDS=	p5-Algorithm-Diff>=1.15:${PORTSDIR}/devel/p5-Algorithm-Diff
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Algorithm::Merge.3

.include <bsd.port.mk>
