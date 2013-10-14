# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-TreePP/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-TreePP
PORTVERSION=	0.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure Perl implementation for parsing/writing xml files

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::TreePP.3

NO_STAGE=	yes
post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/example/envxml.cgi ${EXAMPLESDIR}

.include <bsd.port.mk>
