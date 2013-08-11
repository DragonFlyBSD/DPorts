# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Iterator/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Iterator
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	General-purpose iterator class

BUILD_DEPENDS=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
