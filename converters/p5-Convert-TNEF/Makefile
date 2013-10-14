# Created by: roman@xpert.com
# $FreeBSD: converters/p5-Convert-TNEF/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	Convert-TNEF
PORTVERSION=	0.18
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to read TNEF files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-MIME-Tools>=4.109:${PORTSDIR}/mail/p5-MIME-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Convert::TNEF.3

NO_STAGE=	yes
.include <bsd.port.mk>
