# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: converters/p5-Convert-Bencode_XS/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Convert-Bencode_XS
PORTVERSION=	0.06
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Faster conversions to/from Bencode format

RUN_DEPENDS=	p5-Convert-Bencode>=0:${PORTSDIR}/converters/p5-Convert-Bencode

USES=		perl5
USE_PERL5=	configure

MAN3=		Convert::Bencode_XS.3

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/extras/* ${EXAMPLESDIR}

.include <bsd.port.mk>
