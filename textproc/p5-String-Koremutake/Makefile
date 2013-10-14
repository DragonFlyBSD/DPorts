# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-String-Koremutake/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	String-Koremutake
PORTVERSION=	0.30
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Convert to/from Koremutake Memorable Random Strings

BUILD_DEPENDS=	p5-Error>=0:${PORTSDIR}/lang/p5-Error \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	String::Koremutake.3

NO_STAGE=	yes
.include <bsd.port.mk>
