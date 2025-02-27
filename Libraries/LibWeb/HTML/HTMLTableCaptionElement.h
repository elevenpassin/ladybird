/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/ARIA/Roles.h>
#include <LibWeb/HTML/HTMLElement.h>

namespace Web::HTML {

class HTMLTableCaptionElement final : public HTMLElement {
    WEB_PLATFORM_OBJECT(HTMLTableCaptionElement, HTMLElement);
    GC_DECLARE_ALLOCATOR(HTMLTableCaptionElement);

public:
    virtual ~HTMLTableCaptionElement() override;

    virtual bool is_presentational_hint(FlyString const&) const override;
    virtual void apply_presentational_hints(GC::Ref<CSS::CascadedProperties>) const override;

    // https://www.w3.org/TR/html-aria/#el-caption
    virtual Optional<ARIA::Role> default_role() const override { return ARIA::Role::caption; }

private:
    HTMLTableCaptionElement(DOM::Document&, DOM::QualifiedName);

    virtual void initialize(JS::Realm&) override;
};

}
