# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: devel/glog/Makefile 321203 2013-06-18 16:25:47Z wg $

PORTNAME=	glog
PORTVERSION=	0.3.3
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	A library of C++ classes for flexible logging

LIB_DEPENDS=	execinfo:${PORTSDIR}/devel/libexecinfo \
		gflags:${PORTSDIR}/devel/gflags

GNU_CONFIGURE=	yes
USES=	pathfix
USE_LDCONFIG=	yes
PROJECTHOST=	google-glog

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lexecinfo

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|^docdir.*|docdir = ${DOCSDIR}|' ${WRKSRC}/Makefile.in
.if ! ${PORT_OPTIONS:MDOCS}
	@${REINPLACE_CMD} -E -e '/^install-data-am/,/^$$/ s,install-(dist_doc|dist_html|html)DATA,,g' \
	    ${WRKSRC}/Makefile.in
.endif

#regression-test:
#	cd ${WRKSRC}; ${MAKE} check

.include <bsd.port.post.mk>
