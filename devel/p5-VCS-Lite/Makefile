# Created by: ijliao
# $FreeBSD: devel/p5-VCS-Lite/Makefile 332248 2013-10-31 15:02:49Z vanilla $

PORTNAME=	VCS-Lite
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Minimal version control system

LICENSE=	ART20

BUILD_DEPENDS=	p5-Algorithm-Diff>=1.13:${PORTSDIR}/devel/p5-Algorithm-Diff
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
