# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: x11-toolkits/p5-Tk-DKW/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Tk-DKW
PORTVERSION=	0.03
PORTREVISION=	4
CATEGORIES=	x11-toolkits perl5 tk
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Collection of Tk widgets

BUILD_DEPENDS=	p5-Tk>=804:${PORTSDIR}/x11-toolkits/p5-Tk \
		p5-Tk-Contrib>=0.07:${PORTSDIR}/x11-toolkits/p5-Tk-Contrib
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
DKW_MODULES=	CheckBox Columns ComboEntry CornerBox DockFrame IconCanvas\
		Menustrip ProgressIndicator SplitFrame TabFrame TabbedForm\
		TableEdit
MAN3=		${DKW_MODULES:S/^/Tk::/:S/$/.3/}

post-extract:
	@${MV} ${WRKSRC}/Tk/* ${WRKSRC}/
	@${RMDIR} ${WRKSRC}/Tk/

.include <bsd.port.mk>
