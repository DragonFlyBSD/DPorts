# Created by: ijliao
# $FreeBSD: ports/devel/p5-VCS-Lite/Makefile,v 1.7 2013/01/22 08:14:11 svnexp Exp $

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

PERL_CONFIGURE=	yes

MAN3=	VCS::Lite.3 VCS::Lite::Delta.3

.include <bsd.port.mk>
