# Created by: Eric A. Griff <eric@talesfromthereal.com>
# $FreeBSD: textproc/p5-WDDX/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	WDDX
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PETDANCE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to parse WDDX Packets

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser

USES=		perl5
USE_PERL5=	configure

MAN3=		WDDX.3

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Changes ${DOCSDIR}
.endif

.include <bsd.port.mk>
