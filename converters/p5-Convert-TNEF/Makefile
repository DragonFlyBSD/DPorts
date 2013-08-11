# Created by: roman@xpert.com
# $FreeBSD: converters/p5-Convert-TNEF/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
