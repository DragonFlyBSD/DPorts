# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Iterator-Util/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Iterator-Util
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Essential utilities for the Iterator class

BUILD_DEPENDS=	p5-Iterator>=0:${PORTSDIR}/devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator::Util.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
