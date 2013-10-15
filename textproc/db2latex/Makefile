# Created by: ijliao
# $FreeBSD: textproc/db2latex/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	db2latex
PORTVERSION=	0.8p1
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.8pre1
DISTNAME=	${PORTNAME}-xsl-${PORTVERSION:S/p/pre/}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DocBook to LaTeX XSL stylesheets

RUN_DEPENDS=	xsltproc:${PORTSDIR}/textproc/libxslt \
		${LOCALBASE}/share/xml/docbook/4.2/docbook.cat:${PORTSDIR}/textproc/docbook-xml \
		${LOCALBASE}/share/xsl/docbook/VERSION:${PORTSDIR}/textproc/docbook-xsl

NO_BUILD=	yes

.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

NO_STAGE=	yes
do-install:
	@${MKDIR} ${DATADIR}
	${CP} -R ${WRKSRC}/xsl ${DATADIR}
	@${FIND} ${DATADIR} ! -type d | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${DATADIR} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/ ${DOCSDIR}
.endif

.include <bsd.port.mk>
