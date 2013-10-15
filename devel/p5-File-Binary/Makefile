# Created by: will
# $FreeBSD: devel/p5-File-Binary/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	File-Binary
PORTVERSION=	1.7
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to modify and read binary files

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Binary.3

NO_STAGE=	yes
.include <bsd.port.mk>
