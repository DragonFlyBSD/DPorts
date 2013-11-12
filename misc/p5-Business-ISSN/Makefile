# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: misc/p5-Business-ISSN/Makefile 332733 2013-11-04 14:41:18Z vanilla $

PORTNAME=	Business-ISSN
PORTVERSION=	0.91
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for International Standard Serial Numbers

USES=		perl5
USE_PERL5=	configure

post-patch:
	${REINPLACE_CMD} -e 's,Business-ISSN,Business::ISSN,' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
