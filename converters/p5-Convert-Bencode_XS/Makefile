# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: converters/p5-Convert-Bencode_XS/Makefile 331301 2013-10-22 16:57:44Z mat $

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

NO_STAGE=	yes
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/extras/* ${EXAMPLESDIR}

.include <bsd.port.mk>
