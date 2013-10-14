# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-DateTime-Event-Sunrise/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Event-Sunrise
PORTVERSION=	0.05.02
DISTVERSION=	${PORTVERSION:C/\.(..)$/\1/}
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DateTime Objects for sunrise and sunset for a given day

RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Event::Sunrise.3

NO_STAGE=	yes
.include <bsd.port.mk>
