# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-SAX-Expat/Makefile 333232 2013-11-08 14:36:54Z vanilla $

PORTNAME=	XML-SAX-Expat
PORTVERSION=	0.50
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple API for XML

RUN_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX \
		p5-XML-NamespaceSupport>=0:${PORTSDIR}/textproc/p5-XML-NamespaceSupport
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's|-I\\$$(INSTALLSITELIB)|-I\\$$(DESTDIR)\\$$(INSTALLSITELIB)|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
