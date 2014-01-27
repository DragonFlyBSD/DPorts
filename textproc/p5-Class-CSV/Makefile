# Created by: ijliao
# $FreeBSD: textproc/p5-Class-CSV/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Class-CSV
PORTVERSION=	1.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class based CSV parser/writer

BUILD_DEPENDS=	p5-Text-CSV_XS>=0.23:${PORTSDIR}/textproc/p5-Text-CSV_XS \
		p5-Class-Accessor>=0.18:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
