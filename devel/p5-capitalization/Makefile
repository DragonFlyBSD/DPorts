# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: devel/p5-capitalization/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	capitalization
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Perl module which allows you to use familiar style on method naming

BUILD_DEPENDS=	p5-Devel-Symdump>=0:${PORTSDIR}/devel/p5-Devel-Symdump \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		capitalization.3

NO_STAGE=	yes
.include <bsd.port.mk>
